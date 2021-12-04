//crc64:86a661ca33fbdbc8
//crc64_with_comments:4866f7da79d42bbf
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@query.h"
#include "cl/C@scope@cdef@ub1748b6df09c2d0_0.h"
#include "cl/C@scope@mariadb.h"
#include "o_73/RuntimeException@@__construct.h"
extern string v$const_string$us26a538165cebcfbe;

extern string v$const_string$us3a892467aaab7f88;

extern string v$const_string$us553e93901e462a6e;

extern string v$const_string$us97f678bf97ce186b;

extern string v$const_string$us98250b0c092a82a3;

extern string v$const_var$ub1748b6df09c2d0_0;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [Mariadb.php]
//54:     public function query(string $sql)
array< array< string > > f$Zjsxwc$Mariadb$Mariadb$$query(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this, string const &v$sql) noexcept  {
  CDataPtr<struct ffi_mariadb_st_mysql> v$conn;
  CDataPtr<char> v$cstr;
  int64_t v$j = 0;
  class_instance<C$FFI$Scope> v$kphpworkaroundCdef;
  int64_t v$numFields = 0;
  string v$phpstr;
  CDataPtr<struct ffi_mariadb_st_mysql_res> v$result;
  array< array< string > > v$resultArray;
  CDataPtr<char*> v$row;
  array< string > v$rowstrArray;
//55:     {
//56:         $kphpworkaroundCdef = \FFI::cdef('
  v$kphpworkaroundCdef = ({
    ffi_load_scope_symbols(f$FFI$$load(v$const_string$us553e93901e462a6e), 0, 75, 1);
    f$FFI$$scope(v$const_string$us97f678bf97ce186b);
  });
//57:           char * string_array_get(char** arr, int i);
//58:         ', 'libkphpworkaround.so');
//59: 
//60:         /** @var ffi_cdata<mariadb, struct MYSQL*> $conn */
  ;
//61:         $conn = $this->corelib->mysql_init(null);
  v$conn = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[19].ptr)(nullptr)));
//62:         if (\FFI::isNull($conn)) {
  if (f$FFI$$isNull(v$conn)) {
//63:             throw new RuntimeException(sprintf("Error mysql_init\n ", $this->corelib->mysql_errno(null), $this->corelib->mysql_error(null)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), v$const_var$ub1748b6df09c2d0_0), v$const_string$us98250b0c092a82a3, 63_i64));
      return {};
    }
    ;
  };
//64:         }
//65: 
//66:         if (\FFI::isNull($this->corelib->mysql_real_connect($conn, $this->host, $this->user, $this->password, $this->databaseName, $this->port, "", 0))) {
  if (f$FFI$$isNull(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*, const char*, const char*, const char*, const char*, uint32_t, const char*, uint64_t)>(ffi_env_instance.symbols[31].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$this->$host, ffi_tag<const char*>{}), ffi_php2c(v$this->$user, ffi_tag<const char*>{}), ffi_php2c(v$this->$password, ffi_tag<const char*>{}), ffi_php2c(v$this->$databaseName, ffi_tag<const char*>{}), ffi_php2c(v$this->$port, ffi_tag<uint32_t>{}), ffi_php2c(v$const_string$us553e93901e462a6e, ffi_tag<const char*>{}), ffi_php2c(0_i64, ffi_tag<uint64_t>{}))))) {
//67:             throw new RuntimeException(sprintf("Error mysql_real_connect %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us26a538165cebcfbe, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 67_i64));
      return {};
    }
    ;
  };
//68:         }
//69: 
//70:         if ($this->corelib->mysql_query($conn, $sql)) {
  if (f$boolval (ffi_c2php(FFI_CALL(reinterpret_cast<int32_t (*)(struct ffi_mariadb_st_mysql*, const char*)>(ffi_env_instance.symbols[28].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$sql, ffi_tag<const char*>{})))))) {
//71:             throw new RuntimeException(sprintf("Error mysql_query %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us3a892467aaab7f88, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 71_i64));
      return {};
    }
    ;
  };
//72:         }
//73:         /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
  ;
//74:         $result = $this->corelib->mysql_store_result($conn);
  v$result = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql_res* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[71].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//75:         $numFields = $this->corelib->mysql_num_fields($result);
  v$numFields = ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[24].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//76: 
//77:         $row = $this->corelib->mysql_fetch_row($result);
  v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//78:         /** @var string[][] $resultArray */
  ;
//79:         $resultArray = [];
  v$resultArray = v$const_array$us68788cf2824807c5;
//80: 
//81:         while ($row !== null) {
  while (!!(!f$is_null(v$row))) {
//82:             /** @var string[] $rowstrArray */
    ;
//83:             $rowstrArray = [];
    v$rowstrArray = v$const_array$us68788cf2824807c5;
//84:             for ($j = 0; $j < $numFields; $j++) {
    for (v$j = 0_i64; v$j < v$numFields; ++v$j) {
//85:                 $cstr = $kphpworkaroundCdef->string_array_get($row, $j);
      v$cstr = ffi_c2php(FFI_CALL(reinterpret_cast<char* (*)(char**, int32_t)>(ffi_env_instance.symbols[75].ptr)(ffi_php2c(check_not_null (v$row), ffi_tag<C$FFI$CData<char**>>{}), ffi_php2c(v$j, ffi_tag<int32_t>{}))));
//86:                 $phpstr = \FFI::string($cstr);
      v$phpstr = f$FFI$$string(v$cstr);
//87:                 $rowstrArray[] = $phpstr;
      (v$rowstrArray).push_back (v$phpstr);
    };
//88:             }
//89:             $resultArray[] = $rowstrArray;
    (v$resultArray).push_back (v$rowstrArray);
//90:             $row = $this->corelib->mysql_fetch_row($result);
    v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
  };
//91:         }
//92:         $this->corelib->mysql_free_result($result);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[16].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{})));
//93: 
//94:         $this->corelib->mysql_close($conn);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[4].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})));
//95: 
//96:         return $resultArray;
  return v$resultArray;
}


