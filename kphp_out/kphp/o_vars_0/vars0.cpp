//crc64:402f2e7d25ec1b33
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
bool v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded = false;
mixed v$_COOKIE;
mixed v$_ENV;
mixed v$_FILES;
mixed v$_GET;
mixed v$_POST;
mixed v$_REQUEST;
mixed v$_SERVER;
mixed v$argc;
mixed v$argv;
string v$const_string$us26a538165cebcfbe;
string v$const_string$us3a892467aaab7f88;
string v$const_string$us553e93901e462a6e;
string v$const_string$us5d9a1204c6893d57;
string v$const_string$us909365bfe47614c4;
string v$const_string$us98250b0c092a82a3;
string v$const_string$usba2bb85dba64384;
string v$const_string$use86e45e8b5b927fe;
string v$const_string$usf7d39e9f482ccd22;
string v$const_string$usf8cd9cd87663fdd;
string v$const_string$usfa3590f20c4d7282;
string v$const_var$u13aea9d82fb53914_0;
string v$const_var$u13aea9d82fb53914_1;
string v$const_var$u2aa03d5b15825909_0;
string v$d$PHP_SAPI;
string v$dbName;
string v$host;
class_instance<C$Zjsxwc$Mariadb$Mariadb> v$m;
string v$password;
int64_t v$port = 0;
array< array< string > > v$r;
array< array< string > > v$r2;
bool v$src_Mariadb98250b0c092a82a3$called = false;
bool v$src_functions_ffi_txt28357eebf4241ae3$called = false;
bool v$src_functions_spl_txtd20bc497fe712340$called = false;
bool v$src_functions_txta886c2564cbcabb5$called = false;
bool v$src_functions_uberh3_txt1bc033e5a69adb93$called = false;
bool v$src_mainead571f11daa89a8$called = false;
string v$user;
array< Unknown > v$const_array$us68788cf2824807c5;
alignas(8) static const char raw[] = " \0\0\0 \0\0\0ðÿÿError mysql_real_connect %u: %s\n\0\0\0\0\031\0\0\0\031\0\0\0ðÿÿError mysql_query %u: %s\n\0\0\0\0\0\0\0\0\0\0\0ðÿÿ\0\0\0\0\a\0\0\0\a\0\0\0ðÿÿmariadb\0\0\0\0\0\016\0\0\0\016\0\0\0ðÿÿshow databases\0\0\0\0\0\0(\0\0\0(\0\0\0ðÿÿ/tmp/dev/testffimysqlmariadb/Mariadb.php\0\0\0\0\r\0\0\0\r\0\0\0ðÿÿ192.168.33.77\0\0\0\0\0\0\0\005\0\0\0\005\0\0\0ðÿÿmysql\0\0\0\0\0\0\0\036\0\0\0\036\0\0\0ðÿÿSELECT * FROM `time_zone_name`\0\0\0\0\0\0\016\0\0\0\016\0\0\0ðÿÿkphpworkaround\0\0\0\0\0\0\004\0\0\0\004\0\0\0ðÿÿroot\0";

void const_vars_init_priority_0_file_0() noexcept {
  v$const_string$us26a538165cebcfbe.assign_raw (&raw[0]);
  v$const_string$us3a892467aaab7f88.assign_raw (&raw[48]);
  v$const_string$us553e93901e462a6e.assign_raw (&raw[88]);
  v$const_string$us5d9a1204c6893d57.assign_raw (&raw[104]);
  v$const_string$us909365bfe47614c4.assign_raw (&raw[128]);
  v$const_string$us98250b0c092a82a3.assign_raw (&raw[160]);
  v$const_string$usba2bb85dba64384.assign_raw (&raw[216]);
  v$const_string$use86e45e8b5b927fe.assign_raw (&raw[248]);
  v$const_string$usf7d39e9f482ccd22.assign_raw (&raw[272]);
  v$const_string$usf8cd9cd87663fdd.assign_raw (&raw[320]);
  v$const_string$usfa3590f20c4d7282.assign_raw (&raw[352]);
  v$const_var$u13aea9d82fb53914_0 = string (38, true).append_unsafe ("/tmp/dev/testffimysqlmariadb", 28).append_unsafe ("/mariadb.h", 10).finish_append();
  v$const_var$u13aea9d82fb53914_0.set_reference_counter_to(ExtraRefCnt::for_global_const);
  v$const_var$u13aea9d82fb53914_1 = string (45, true).append_unsafe ("/tmp/dev/testffimysqlmariadb", 28).append_unsafe ("/kphpworkaround.h", 17).finish_append();
  v$const_var$u13aea9d82fb53914_1.set_reference_counter_to(ExtraRefCnt::for_global_const);
  v$const_var$u2aa03d5b15825909_0 = string (17, true).append_unsafe ("Error mysql_init\n", 17).finish_append();
  v$const_var$u2aa03d5b15825909_0.set_reference_counter_to(ExtraRefCnt::for_global_const);
}

void const_vars_init_priority_1_file_0() noexcept {
  v$const_array$us68788cf2824807c5 = array< Unknown > ();
  v$const_array$us68788cf2824807c5.set_reference_counter_to(ExtraRefCnt::for_global_const);

}

