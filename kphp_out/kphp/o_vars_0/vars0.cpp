//crc64:79ccd9ff29e789ef
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
mixed v$_COOKIE;
mixed v$_ENV;
mixed v$_FILES;
mixed v$_GET;
mixed v$_POST;
mixed v$_REQUEST;
mixed v$_SERVER;
mixed v$argc;
mixed v$argv;
string v$const_string$us127d4c5be47127fc;
string v$const_string$us26a538165cebcfbe;
string v$const_string$us3a892467aaab7f88;
string v$const_string$us553e93901e462a6e;
string v$const_string$us5d9a1204c6893d57;
string v$const_string$us909365bfe47614c4;
string v$const_string$usb4258bb91cd13ab;
string v$const_string$usba2bb85dba64384;
string v$const_string$usf8e5e1651bd01df3;
string v$const_string$usfa3590f20c4d7282;
string v$const_string$usff5c5a0e3e83b8f0;
string v$const_var$u13aea9d82fb53914_0;
string v$d$PHP_SAPI;
class_instance<C$Zjsxwc$Mariadb$Mariadb> v$m;
bool v$src_Mariadb98250b0c092a82a3$called = false;
bool v$src_functions_ffi_txt28357eebf4241ae3$called = false;
bool v$src_functions_spl_txtd20bc497fe712340$called = false;
bool v$src_functions_txta886c2564cbcabb5$called = false;
bool v$src_functions_uberh3_txt1bc033e5a69adb93$called = false;
bool v$src_mainead571f11daa89a8$called = false;
alignas(8) static const char raw[] = "\002\0\0\0\002\0\0\0ðÿÿOK\0\0 \0\0\0 \0\0\0ðÿÿError mysql_real_connect %u: %s\n\0\0\0\0\031\0\0\0\031\0\0\0ðÿÿError mysql_query %u: %s\n\0\0\0\0\0\0\0\0\0\0\0ðÿÿ\0\0\0\0\a\0\0\0\a\0\0\0ðÿÿmariadb\0\0\0\0\0\016\0\0\0\016\0\0\0ðÿÿshow databases\0\0\0\0\0\0\030\0\0\0\030\0\0\0ðÿÿError mysql_init %u: %s\n\0\0\0\0\r\0\0\0\r\0\0\0ðÿÿ192.168.33.77\0\0\0\0\0\0\0\001\0\0\0\001\0\0\0ðÿÿ \0\0\0\004\0\0\0\004\0\0\0ðÿÿroot\0\0\0\0\0\0\0\0\001\0\0\0\001\0\0\0ðÿÿ\n\0";

void const_vars_init_priority_0_file_0() noexcept {
  v$const_string$us127d4c5be47127fc.assign_raw (&raw[0]);
  v$const_string$us26a538165cebcfbe.assign_raw (&raw[16]);
  v$const_string$us3a892467aaab7f88.assign_raw (&raw[64]);
  v$const_string$us553e93901e462a6e.assign_raw (&raw[104]);
  v$const_string$us5d9a1204c6893d57.assign_raw (&raw[120]);
  v$const_string$us909365bfe47614c4.assign_raw (&raw[144]);
  v$const_string$usb4258bb91cd13ab.assign_raw (&raw[176]);
  v$const_string$usba2bb85dba64384.assign_raw (&raw[216]);
  v$const_string$usf8e5e1651bd01df3.assign_raw (&raw[248]);
  v$const_string$usfa3590f20c4d7282.assign_raw (&raw[264]);
  v$const_string$usff5c5a0e3e83b8f0.assign_raw (&raw[288]);
  v$const_var$u13aea9d82fb53914_0 = string (38, true).append_unsafe ("/tmp/dev/testffimysqlmariadb", 28).append_unsafe ("/mariadb.h", 10).finish_append();
  v$const_var$u13aea9d82fb53914_0.set_reference_counter_to(ExtraRefCnt::for_global_const);
}

