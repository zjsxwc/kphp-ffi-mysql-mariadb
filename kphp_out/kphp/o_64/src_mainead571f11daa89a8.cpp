//crc64:ea890121a23ce13d
//crc64_with_comments:285a94fc00799126
#include "runtime-headers.h"
#include "o_64/src_mainead571f11daa89a8.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@__construct.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@loadCoreLib.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@test.h"
extern class_instance<C$Zjsxwc$Mariadb$Mariadb> v$m;

extern bool v$src_mainead571f11daa89a8$called;

//source = [main.php]
//3: include_once __DIR__."/Mariadb.php";
Optional < bool > f$src_mainead571f11daa89a8() noexcept  {
  v$src_mainead571f11daa89a8$called = true;
//4: 
//5: \Zjsxwc\Mariadb\Mariadb::loadCoreLib();
  f$Zjsxwc$Mariadb$Mariadb$$loadCoreLib();
//6: $m = new Zjsxwc\Mariadb\Mariadb();
  v$m = f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb>().alloc());
//7: 
  f$Zjsxwc$Mariadb$Mariadb$$test(f$make_clone(v$m));
  return Optional<bool>{};
}


