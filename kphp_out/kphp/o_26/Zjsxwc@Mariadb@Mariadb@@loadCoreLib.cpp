//crc64:13d50737565a4ede
//crc64_with_comments:27d250e510543c1c
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@loadCoreLib.h"
extern bool v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded;

extern string v$const_var$u13aea9d82fb53914_0;

//source = [Mariadb.php]
//11:     private static function loadCoreLib()
void f$Zjsxwc$Mariadb$Mariadb$$loadCoreLib() noexcept  {
//12:     {
//13:         if (self::$corelibLoaded) {
  if (v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded) {
//14:             return;
    return ;
  };
//15:         }
//16:         \FFI::load(__DIR__ . '/mariadb.h');
  ffi_load_scope_symbols(f$FFI$$load(v$const_var$u13aea9d82fb53914_0), 1, 0, 75);
//17:         self::$corelibLoaded = true;
  v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded = true;
  return ;
}


