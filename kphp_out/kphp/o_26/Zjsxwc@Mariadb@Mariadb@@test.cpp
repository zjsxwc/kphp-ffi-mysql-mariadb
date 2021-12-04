//crc64:d30707646ac4ddfd
//crc64_with_comments:cb9cc98e4fe64dd8
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@test.h"
#include "cl/C@scope@cdef@u62899a918cc5984a_0.h"
#include "cl/C@scope@mariadb.h"
#include "o_73/RuntimeException@@__construct.h"
extern string v$const_string$us26a538165cebcfbe;

extern string v$const_string$us3a892467aaab7f88;

extern string v$const_string$us553e93901e462a6e;

extern string v$const_string$us909365bfe47614c4;

extern string v$const_string$us98250b0c092a82a3;

extern string v$const_string$usba2bb85dba64384;

extern string v$const_string$use92b47d43fad6c3a;

extern string v$const_string$usfa3590f20c4d7282;

extern string v$const_var$u62899a918cc5984a_0;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [Mariadb.php]
//36:     public function test()
void f$Zjsxwc$Mariadb$Mariadb$$test(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
  CDataPtr<struct ffi_mariadb_st_mysql> v$conn;
  CDataPtr<char> v$cstr;
  string v$host;
  class_instance<C$FFI$Scope> v$kphpworkaroundCdef;
  int64_t v$numFields = 0;
  string v$password;
  string v$phpstr;
  int64_t v$port = 0;
  CDataPtr<struct ffi_mariadb_st_mysql_res> v$result;
  array< string > v$resultArray;
  CDataPtr<char*> v$row;
  string v$sql;
  string v$user;
//37:     {
//38:         $kphpworkaroundCdef = \FFI::cdef('
  v$kphpworkaroundCdef = ({
    ffi_load_scope_symbols(f$FFI$$load(v$const_string$us553e93901e462a6e), 0, 75, 1);
    f$FFI$$scope(v$const_string$use92b47d43fad6c3a);
  });
//39:           char * string_array_get(char** arr, int i);
//40:         ', 'libkphpworkaround.so');
//41: 
//42:         /** @var ffi_cdata<mariadb, struct MYSQL*> $conn */
  ;
//43:         $conn = $this->corelib->mysql_init(null);
  v$conn = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[19].ptr)(nullptr)));
//44:         if (\FFI::isNull($conn)) {
  if (f$FFI$$isNull(v$conn)) {
//45:             throw new RuntimeException(sprintf("Error mysql_init\n ", $this->corelib->mysql_errno(null), $this->corelib->mysql_error(null)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), v$const_var$u62899a918cc5984a_0), v$const_string$us98250b0c092a82a3, 45_i64));
      return ;
    }
    ;
  };
//46:         }
//47: 
//48:         $host = "192.168.33.77";
  v$host = v$const_string$usba2bb85dba64384;
//49:         $user = "root";
  v$user = v$const_string$usfa3590f20c4d7282;
//50:         $password = "root";
  v$password = v$const_string$usfa3590f20c4d7282;
//51:         $port = 3306;
  v$port = 3306_i64;
//52:         if (\FFI::isNull($this->corelib->mysql_real_connect($conn, $host, $user, $password, "", $port, "", 0))) {
  if (f$FFI$$isNull(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*, const char*, const char*, const char*, const char*, uint32_t, const char*, uint64_t)>(ffi_env_instance.symbols[31].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$host, ffi_tag<const char*>{}), ffi_php2c(v$user, ffi_tag<const char*>{}), ffi_php2c(v$password, ffi_tag<const char*>{}), ffi_php2c(v$const_string$us553e93901e462a6e, ffi_tag<const char*>{}), ffi_php2c(v$port, ffi_tag<uint32_t>{}), ffi_php2c(v$const_string$us553e93901e462a6e, ffi_tag<const char*>{}), ffi_php2c(0_i64, ffi_tag<uint64_t>{}))))) {
//53:             throw new RuntimeException(sprintf("Error mysql_real_connect %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us26a538165cebcfbe, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 53_i64));
      return ;
    }
    ;
  };
//54:         }
//55: 
//56:         $sql = "show databases";
  v$sql = v$const_string$us909365bfe47614c4;
//57:         if ($this->corelib->mysql_query($conn, $sql)) {
  if (f$boolval (ffi_c2php(FFI_CALL(reinterpret_cast<int32_t (*)(struct ffi_mariadb_st_mysql*, const char*)>(ffi_env_instance.symbols[28].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$sql, ffi_tag<const char*>{})))))) {
//58:             throw new RuntimeException(sprintf("Error mysql_query %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us3a892467aaab7f88, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 58_i64));
      return ;
    }
    ;
  };
//59:         }
//60:         /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
  ;
//61:         $result = $this->corelib->mysql_store_result($conn);
  v$result = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql_res* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[71].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//62:         $numFields = $this->corelib->mysql_num_fields($result);
  v$numFields = ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[24].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//63:         var_dump($numFields);
  f$var_dump(v$numFields);
//64:         
//65:         $row = $this->corelib->mysql_fetch_row($result);
  v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//66:         /** @var string[] $resultArray */
  ;
//67:         $resultArray = [];
  v$resultArray = v$const_array$us68788cf2824807c5;
//68: 
//69:         while ($row !== null) {
  while (!!(!f$is_null(v$row))) {
//70:             $cstr = $kphpworkaroundCdef->string_array_get($row, 0);
    v$cstr = ffi_c2php(FFI_CALL(reinterpret_cast<char* (*)(char**, int32_t)>(ffi_env_instance.symbols[75].ptr)(ffi_php2c(check_not_null (v$row), ffi_tag<C$FFI$CData<char**>>{}), ffi_php2c(0_i64, ffi_tag<int32_t>{}))));
//71:             $phpstr = \FFI::string($cstr);
    v$phpstr = f$FFI$$string(v$cstr);
//72:             $resultArray[] = $phpstr;
    (v$resultArray).push_back (v$phpstr);
//73:             $row = $this->corelib->mysql_fetch_row($result);
    v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
  };
//74:         }
//75:         $this->corelib->mysql_free_result($result);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[16].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{})));
//76:         var_dump($resultArray);
  f$var_dump(v$resultArray);
//77: 
//78:         $this->corelib->mysql_close($conn);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[4].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})));
  return ;
}


