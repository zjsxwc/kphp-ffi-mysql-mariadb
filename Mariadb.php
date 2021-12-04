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


    /**
     * Mariadb constructor.
     * @throws RuntimeException
     */
    public function __construct()
    {
        self::loadCoreLib();
        $this->corelib = \FFI::scope('mariadb');
    }


    /**
     * @throws RuntimeException
     */
    public function test()
    {
        $kphpworkaroundCdef = \FFI::cdef('
          char * string_array_get(char** arr, int i);
        ', 'libkphpworkaround.so');

        /** @var ffi_cdata<mariadb, struct MYSQL*> $conn */
        $conn = $this->corelib->mysql_init(null);
        if (\FFI::isNull($conn)) {
            throw new RuntimeException(sprintf("Error mysql_init\n", $this->corelib->mysql_errno(null), $this->corelib->mysql_error(null)));
        }

        $host = "192.168.33.77";
        $user = "root";
        $password = "root";
        $port = 3306;
        if (\FFI::isNull($this->corelib->mysql_real_connect($conn, $host, $user, $password, "", $port, "", 0))) {
            throw new RuntimeException(sprintf("Error mysql_real_connect %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
        }

        $sql = "show databases";
        if ($this->corelib->mysql_query($conn, $sql)) {
            throw new RuntimeException(sprintf("Error mysql_query %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
        }
        /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
        $result = $this->corelib->mysql_store_result($conn);
        $numFields = $this->corelib->mysql_num_fields($result);
        var_dump($numFields);

        $row = $this->corelib->mysql_fetch_row($result);
        /** @var string[] $resultArray */
        $resultArray = [];

        while ($row !== null) {
            $cstr = $kphpworkaroundCdef->string_array_get($row, 0);
            $phpstr = \FFI::string($cstr);
            $resultArray[] = $phpstr;
            $row = $this->corelib->mysql_fetch_row($result);
        }
        $this->corelib->mysql_free_result($result);
        var_dump($resultArray);

        $this->corelib->mysql_close($conn);
    }

    /** @var ffi_scope<mariadb> */
    public $corelib = null;

}