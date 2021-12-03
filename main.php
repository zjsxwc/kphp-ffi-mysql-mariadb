<?php
/**
 * yay -S mariadb-clients
 */
include_once __DIR__."/Mariadb.php";

\Zjsxwc\Mariadb\Mariadb::loadCoreLib();
$m = new Zjsxwc\Mariadb\Mariadb();
$m->test();