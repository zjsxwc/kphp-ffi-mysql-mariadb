//crc64:c022d297b2d85a44
//crc64_with_comments:526837e609b2d0f6
#include "runtime-headers.h"
#include "o_64/src_mainead571f11daa89a8.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@__construct.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@closeConnection.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@connect.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@query.h"
extern string v$dbName;

extern string v$host;

extern class_instance<C$Zjsxwc$Mariadb$Mariadb> v$m;

extern string v$password;

extern int64_t v$port;

extern array< array< string > > v$r;

extern bool v$src_mainead571f11daa89a8$called;

extern string v$user;

extern string v$const_string$us909365bfe47614c4;

extern string v$const_string$usba2bb85dba64384;

extern string v$const_string$use86e45e8b5b927fe;

extern string v$const_string$usf7d39e9f482ccd22;

extern string v$const_string$usfa3590f20c4d7282;

//source = [main.php]
//9: require_once __DIR__."/Mariadb.php";
Optional < bool > f$src_mainead571f11daa89a8() noexcept  {
  v$src_mainead571f11daa89a8$called = true;
//10: 
//11: $host = "192.168.33.77";
  v$host = v$const_string$usba2bb85dba64384;
//12: $user = "root";
  v$user = v$const_string$usfa3590f20c4d7282;
//13: $password = "root";
  v$password = v$const_string$usfa3590f20c4d7282;
//14: $port = 3306;
  v$port = 3306_i64;
//15: $m = new Zjsxwc\Mariadb\Mariadb($host, $user, $password, $port);
  v$m = f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb>().alloc(), f$make_clone(v$host), f$make_clone(v$user), f$make_clone(v$password), v$port);
//16: $m->connect();
  TRY_CALL_VOID_ (f$Zjsxwc$Mariadb$Mariadb$$connect(f$make_clone(v$m)), return {});
//17: $r = $m->query("show databases");
  v$r = TRY_CALL_ (array< array< string > >, f$Zjsxwc$Mariadb$Mariadb$$query(f$make_clone(v$m), v$const_string$us909365bfe47614c4), return {});
//18: $m->closeConnection();
  f$Zjsxwc$Mariadb$Mariadb$$closeConnection(f$make_clone(v$m));
//19: var_dump($r);
  f$var_dump(v$r);
//20: 
//21: $host = "192.168.33.77";
  v$host = v$const_string$usba2bb85dba64384;
//22: $user = "root";
  v$user = v$const_string$usfa3590f20c4d7282;
//23: $password = "root";
  v$password = v$const_string$usfa3590f20c4d7282;
//24: $port = 3306;
  v$port = 3306_i64;
//25: $dbName = "mysql";
  v$dbName = v$const_string$use86e45e8b5b927fe;
//26: $m = new Zjsxwc\Mariadb\Mariadb($host, $user, $password, $port, $dbName);
  v$m = f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb>().alloc(), f$make_clone(v$host), f$make_clone(v$user), f$make_clone(v$password), v$port, f$make_clone(v$dbName));
//27: $m->connect();
  TRY_CALL_VOID_ (f$Zjsxwc$Mariadb$Mariadb$$connect(f$make_clone(v$m)), return {});
//28: $r = $m->query("SELECT * FROM `time_zone_name`");
  v$r = TRY_CALL_ (array< array< string > >, f$Zjsxwc$Mariadb$Mariadb$$query(f$make_clone(v$m), v$const_string$usf7d39e9f482ccd22), return {});
//29: $m->closeConnection();
  f$Zjsxwc$Mariadb$Mariadb$$closeConnection(f$make_clone(v$m));
//30: 
  f$var_dump(v$r);
  return Optional<bool>{};
}


