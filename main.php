<?php
/**
 * yay -S mariadb-clients
 *
 * gcc arrayworkaround.c  -fPIC -shared -o libarrayworkaround.so
 * sudo cp ./libarrayworkaround.so /usr/lib/
 */
include_once __DIR__."/Mariadb.php";

\Zjsxwc\Mariadb\Mariadb::loadCoreLib();
$m = new Zjsxwc\Mariadb\Mariadb();
$m->test();