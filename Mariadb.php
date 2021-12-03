<?php

namespace Zjsxwc\Mariadb;

class Mariadb
{
    public static function loadCoreLib() {
        \FFI::load(__DIR__ . '/mariadb.h');
    }
    public function __construct() {
        $this->corelib = \FFI::scope('mariadb');
    }

    public function test() {
        /** @var ffi_cdata<mariadb, struct MYSQL*> $conn */
        $conn = $this->corelib->mysql_init(null);
        if ($conn === null) {
            echo sprintf("Error mysql_init %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn) );
        }


        if ($this->corelib->mysql_real_connect($conn, "192.168.33.77", "root", "root","",3306,"",0) === null) {
            echo sprintf("Error mysql_real_connect %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn) );
        }
        if ($this->corelib->mysql_query($conn, "show databases")) {
            echo sprintf("Error mysql_query %u: %s\n", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn) );
        }
        /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
        $result = $this->corelib->mysql_store_result($conn);

        $numFields = $this->corelib->mysql_num_fields($result);
        var_dump($numFields);
        $row = $this->corelib->mysql_fetch_row($result);
//
//        $cdef = \FFI::cdef('
//  int printf(const char **format, ...);
//', 'libc.so');

        $i = 1;
        while ($row !== null) {
            $addr = \FFI::addr($row);
            $s = \FFI::cast('char *', $addr);
            $ss = \FFI::string($s);
            echo $i." ". $ss."\n" ;
//            $cdef->printf($row);
            $i++;
            $row = $this->corelib->mysql_fetch_row($result);
        }

        $this->corelib->mysql_free_result($result);
        $this->corelib->mysql_close($conn);

        echo "OK";
    }

    /** @var ffi_scope<mariadb> */
    public $corelib = null;

}