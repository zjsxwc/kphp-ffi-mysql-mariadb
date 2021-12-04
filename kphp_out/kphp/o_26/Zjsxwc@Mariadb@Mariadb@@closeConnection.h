//crc64:e053958c73b45839
//crc64_with_comments:71d1a382f020d48e
#pragma once
#include "runtime-headers.h"
#include "cl/C@Zjsxwc@Mariadb@Mariadb.h"
inline void f$Zjsxwc$Mariadb$Mariadb$$closeConnection(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept ;
//source = [Mariadb.php]
//114:     public function closeConnection()
void f$Zjsxwc$Mariadb$Mariadb$$closeConnection(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
//115:     {
//116:         if ($this->_isConnected) {
  if (v$this->$_isConnected) {
//117:             $this->corelib->mysql_close($this->_conn);
    FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[5].ptr)(ffi_php2c(v$this->$_conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})));
//118:             $this->_isConnected = false;
    v$this->$_isConnected = false;
  };
  return ;
}


