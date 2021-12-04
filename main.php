<?php
/**
 * yay -S mariadb-clients
 *
 * gcc kphpworkaround.c  -fPIC -shared -o libarrayworkaround.so
 * sudo cp ./libarrayworkaround.so /usr/lib/
 */

require_once __DIR__."/Mariadb.php";

$host = "192.168.33.77";
$user = "root";
$password = "root";
$port = 3306;
$m = new Zjsxwc\Mariadb\Mariadb($host, $user, $password, $port);
$m->connect();
$r = $m->query("show databases");
$m->closeConnection();
var_dump($r);

$host = "192.168.33.77";
$user = "root";
$password = "root";
$port = 3306;
$dbName = "mysql";
$m = new Zjsxwc\Mariadb\Mariadb($host, $user, $password, $port, $dbName);
$m->connect();
$r = $m->query("SELECT * FROM `time_zone_name`");
$m->closeConnection();
var_dump($r);