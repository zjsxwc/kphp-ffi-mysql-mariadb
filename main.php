<?php
/**
 * yay -S mariadb-clients
 *
 * gcc kphpworkaround.c  -fPIC -shared -o libarrayworkaround.so
 * sudo cp ./libarrayworkaround.so /usr/lib/
 */

require_once __DIR__."/Mariadb.php";

$m = new Zjsxwc\Mariadb\Mariadb();
$m->test();