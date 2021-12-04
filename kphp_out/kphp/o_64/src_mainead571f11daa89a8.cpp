//crc64:e26e49a068b1d8e9
//crc64_with_comments:2cd7ff3eeb715995
#include "runtime-headers.h"
#include "o_64/src_mainead571f11daa89a8.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@__construct.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@test.h"
extern class_instance<C$Zjsxwc$Mariadb$Mariadb> v$m;

extern bool v$src_mainead571f11daa89a8$called;

//source = [main.php]
//9: require_once __DIR__."/Mariadb.php";
Optional < bool > f$src_mainead571f11daa89a8() noexcept  {
  v$src_mainead571f11daa89a8$called = true;
//10: 
//11: $m = new Zjsxwc\Mariadb\Mariadb();
  v$m = f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb>().alloc());
//12: 
  TRY_CALL_VOID_ (f$Zjsxwc$Mariadb$Mariadb$$test(f$make_clone(v$m)), return {});
  return Optional<bool>{};
}


