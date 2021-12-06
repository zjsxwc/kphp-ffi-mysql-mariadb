//crc64:72c0d1d32fdbc6d4
//crc64_with_comments:ee096279fdb35c26
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@connect.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@initConnection.h"
#include "o_73/RuntimeException@@__construct.h"
extern string v$const_string$us26a538165cebcfbe;

extern string v$const_string$us553e93901e462a6e;

extern string v$const_string$us98250b0c092a82a3;

extern string v$const_var$u2aa03d5b15825909_0;

//source = [Mariadb.php]
//64:     public function connect()
void f$Zjsxwc$Mariadb$Mariadb$$connect(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
//65:     {
//66:         if ($this->_isConnected) {
  if (v$this->$_isConnected) {
//67:             return;
    return ;
  };
//68:         }
//69:         $this->_conn = $this->initConnection();
  v$this->$_conn = f$Zjsxwc$Mariadb$Mariadb$$initConnection(v$this);
//70:         if (\FFI::isNull($this->_conn)) {
  if (f$FFI$$isNull(v$this->$_conn)) {
//71:             throw new RuntimeException(sprintf("Error mysql_init\n ", $this->corelib->mysql_errno(null), $this->corelib->mysql_error(null)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), v$const_var$u2aa03d5b15825909_0), v$const_string$us98250b0c092a82a3, 71_i64));
      return ;
    }
    ;
  };
//72:         }
//73:         if (\FFI::isNull($this->corelib->mysql_real_connect($this->_conn, $this->host, $this->user, $this->password, $this->databaseName, $this->port, "", 0))) {
  if (f$FFI$$isNull(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*, const char*, const char*, const char*, const char*, uint32_t, const char*, uint64_t)>(ffi_env_instance.symbols[32].ptr)(ffi_php2c(v$this->$_conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$this->$host, ffi_tag<const char*>{}), ffi_php2c(v$this->$user, ffi_tag<const char*>{}), ffi_php2c(v$this->$password, ffi_tag<const char*>{}), ffi_php2c(v$this->$databaseName, ffi_tag<const char*>{}), ffi_php2c(v$this->$port, ffi_tag<uint32_t>{}), ffi_php2c(v$const_string$us553e93901e462a6e, ffi_tag<const char*>{}), ffi_php2c(0_i64, ffi_tag<uint64_t>{}))))) {
//74:             throw new RuntimeException(sprintf("Error mysql_real_connect %u: %s\n ", $this->corelib->mysql_errno($this->_conn), $this->corelib->mysql_error($this->_conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us26a538165cebcfbe, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$this->$_conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[11].ptr)(ffi_php2c(v$this->$_conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 74_i64));
      return ;
    }
    ;
  };
//75:         }
//76:         $this->_isConnected = true;
  v$this->$_isConnected = true;
  return ;
}


