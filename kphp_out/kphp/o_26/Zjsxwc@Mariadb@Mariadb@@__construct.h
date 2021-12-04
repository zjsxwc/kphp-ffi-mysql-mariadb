//crc64:20fdb39216160285
//crc64_with_comments:c05b094a284d46df
#pragma once
#include "runtime-headers.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
inline class_instance<C$Zjsxwc$Mariadb$Mariadb> f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept ;
#include "o_26/Zjsxwc@Mariadb@Mariadb@@loadCoreLib.h"
extern string v$const_string$us5d9a1204c6893d57;

//source = [Mariadb.php]
//25:     public function __construct()
class_instance<C$Zjsxwc$Mariadb$Mariadb> f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
//26:     {
//27:         self::loadCoreLib();
  f$Zjsxwc$Mariadb$Mariadb$$loadCoreLib();
//28:         $this->corelib = \FFI::scope('mariadb');
  v$this->$corelib = f$FFI$$scope(v$const_string$us5d9a1204c6893d57);
  return v$this;
}


