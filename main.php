<?php

require_once __DIR__ . "/Mariadb.php";

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
$r2 = $m->query("show databases");
$m->closeConnection();
var_dump($r);
var_dump($r2);