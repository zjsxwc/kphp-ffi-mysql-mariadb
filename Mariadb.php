<?php

namespace Zjsxwc\Mariadb;

use RuntimeException;

class Mariadb
{
    private static $corelibLoaded = false;

    private static function loadCoreLib()
    {
        if (self::$corelibLoaded) {
            return;
        }
        \FFI::load(__DIR__ . '/mariadb.h');
        \FFI::load(__DIR__ . '/kphpworkaround.h');
        self::$corelibLoaded = true;
    }

    /** @var string */
    private $host;
    /** @var string */
    private $user;
    /** @var string */
    private $password;
    /** @var string */
    private $databaseName;
    /** @var int */
    private $port;

    /**
     * Mariadb constructor.
     * @throws RuntimeException
     */
    public function __construct(string $host, string $user, string $password, int $port = 3306, string $databaseName = "")
    {
        self::loadCoreLib();
        $this->corelib = \FFI::scope('mariadb');

        $this->host = $host;
        $this->user = $user;
        $this->password = $password;
        $this->port = $port;
        $this->databaseName = $databaseName;
    }

    /** @var ffi_cdata<mariadb, struct st_mysql*> */
    private $_conn;
    private $_isConnected = false;

    /**
     * @return ffi_cdata<mariadb, struct st_mysql*>
     */
    private function initConnection()
    {
        $ptr = $this->corelib->new('struct st_mysql *');
        /** @var ffi_cdata<mariadb, struct st_mysql*> $t */
        $t = $this->corelib->mysql_init($ptr);
        return $t;
    }

    public function connect()
    {
        if ($this->_isConnected) {
            return;
        }
        $this->_conn = $this->initConnection();
        if (\FFI::isNull($this->_conn)) {
            throw new RuntimeException(sprintf("Error mysql_init\n", $this->corelib->mysql_errno(null), $this->corelib->mysql_error(null)));
        }
        if (\FFI::isNull($this->corelib->mysql_real_connect($this->_conn, $this->host, $this->user, $this->password, $this->databaseName, $this->port, "", 0))) {
            throw new RuntimeException(sprintf("Error mysql_real_connect %u: %s\n", $this->corelib->mysql_errno($this->_conn), $this->corelib->mysql_error($this->_conn)));
        }
        $this->_isConnected = true;
    }

    /**
     * @return string[][]
     * @throws RuntimeException
     */
    public function query(string $sql)
    {
        $this->connect();

        /** @var ffi_cdata<mariadb, struct st_mysql*> $conn */
        $conn = $this->_conn;
        if ($this->corelib->mysql_query($conn, $sql)) {
            throw new RuntimeException(sprintf("Error mysql_query %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
        }
        /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
        $result = $this->corelib->mysql_store_result($conn);
        $numFields = $this->corelib->mysql_num_fields($result);

        $row = $this->corelib->mysql_fetch_row($result);
        /** @var string[][] $resultArray */
        $resultArray = [];

        while ($row !== null) {
            /** @var string[] $rowstrArray */
            $rowstrArray = [];
            for ($j = 0; $j < $numFields; $j++) {
                $cstr = $this->kphpworkaroundlib->string_array_get($row, $j);
                $phpstr = \FFI::string($cstr);
                $rowstrArray[] = $phpstr;
            }
            $resultArray[] = $rowstrArray;
            $row = $this->corelib->mysql_fetch_row($result);
        }
        $this->corelib->mysql_free_result($result);

        return $resultArray;
    }

    public function closeConnection()
    {
        if ($this->_isConnected) {
            $this->corelib->mysql_close($this->_conn);
            $this->_isConnected = false;
        }
    }

    /** @var ffi_scope<mariadb> */
    public $corelib = null;
    /** @var ffi_scope<kphpworkaround> */
    public $kphpworkaroundlib = null;

}