//crc64:c06909da69d0e2c5
//crc64_with_comments:5542861677793f5c
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@initConnection.h"
#include "cl/C@scope@mariadb.h"
//source = [Mariadb.php]
//55:     private function initConnection()
CDataPtr<struct ffi_mariadb_st_mysql> f$Zjsxwc$Mariadb$Mariadb$$initConnection(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
  CDataPtr<struct ffi_mariadb_st_mysql> v$ptr;
  CDataPtr<struct ffi_mariadb_st_mysql> v$t;
//56:     {
//57:         $ptr = $this->corelib->new('struct st_mysql *');
  v$ptr = ffi_new_cdata_ptr<struct ffi_mariadb_st_mysql*>();
//58:         /** @var ffi_cdata<mariadb, struct st_mysql*> $t */
  ;
//59:         $t = $this->corelib->mysql_init($ptr);
  v$t = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[20].ptr)(ffi_php2c(v$ptr, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//60:         return $t;
  return v$t;
}


