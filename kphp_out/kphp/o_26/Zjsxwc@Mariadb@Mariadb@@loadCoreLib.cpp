//crc64:3bc0de6073ab9bba
//crc64_with_comments:63ea91655fc2db74
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@loadCoreLib.h"
extern bool v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded;

extern string v$const_var$u13aea9d82fb53914_0;

extern string v$const_var$u13aea9d82fb53914_1;

//source = [Mariadb.php]
//10:     private static function loadCoreLib()
void f$Zjsxwc$Mariadb$Mariadb$$loadCoreLib() noexcept  {
//11:     {
//12:         if (self::$corelibLoaded) {
  if (v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded) {
//13:             return;
    return ;
  };
//14:         }
//15:         \FFI::load(__DIR__ . '/mariadb.h');
  ffi_load_scope_symbols(f$FFI$$load(v$const_var$u13aea9d82fb53914_0), 0, 1, 75);
//16:         \FFI::load(__DIR__ . '/kphpworkaround.h');
  ffi_load_scope_symbols(f$FFI$$load(v$const_var$u13aea9d82fb53914_1), 1, 0, 1);
//17:         self::$corelibLoaded = true;
  v$Zjsxwc$Mariadb$Mariadb$$corelibLoaded = true;
  return ;
}


