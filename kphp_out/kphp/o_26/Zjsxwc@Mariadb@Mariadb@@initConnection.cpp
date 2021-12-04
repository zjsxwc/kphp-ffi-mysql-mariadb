//crc64:e69d1dbfcc27c349
//crc64_with_comments:28b1451461f75723
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@initConnection.h"
#include "cl/C@scope@mariadb.h"
//source = [Mariadb.php]
//54:     private function initConnection()
CDataPtr<struct ffi_mariadb_st_mysql> f$Zjsxwc$Mariadb$Mariadb$$initConnection(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
  CDataPtr<struct ffi_mariadb_st_mysql> v$mysqlip;
  CDataPtr<struct ffi_mariadb_st_mysql> v$t;
//55:     {
//56:         $mysqlip = $this->corelib->new('struct st_mysql *');
  v$mysqlip = ffi_new_cdata_ptr<struct ffi_mariadb_st_mysql*>();
//57:         /** @var ffi_cdata<mariadb, struct st_mysql*> $t */
  ;
//58:         $t = $this->corelib->mysql_init($mysqlip);
  v$t = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[20].ptr)(ffi_php2c(v$mysqlip, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//59:         return $t;
  return v$t;
}


