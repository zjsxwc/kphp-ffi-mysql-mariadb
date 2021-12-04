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


    /**
     * @return string[][]
     * @throws RuntimeException
     */
    public function query(string $sql)
    {
        $kphpworkaroundCdef = \FFI::cdef('
          char * string_array_get(char** arr, int i);
        ', 'libkphpworkaround.so');

        /** @var ffi_cdata<mariadb, struct MYSQL*> $conn */
        $conn = $this->corelib->mysql_init(null);
        if (\FFI::isNull($conn)) {
            throw new RuntimeException(sprintf("Error mysql_init\n", $this->corelib->mysql_errno(null), $this->corelib->mysql_error(null)));
        }

        if (\FFI::isNull($this->corelib->mysql_real_connect($conn, $this->host, $this->user, $this->password, $this->databaseName, $this->port, "", 0))) {
            throw new RuntimeException(sprintf("Error mysql_real_connect %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
        }

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
                $cstr = $kphpworkaroundCdef->string_array_get($row, $j);
                $phpstr = \FFI::string($cstr);
                $rowstrArray[] = $phpstr;
            }
            $resultArray[] = $rowstrArray;
            $row = $this->corelib->mysql_fetch_row($result);
        }
        $this->corelib->mysql_free_result($result);

        $this->corelib->mysql_close($conn);

        return $resultArray;
    }

    /** @var ffi_scope<mariadb> */
    public $corelib = null;

}