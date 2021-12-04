//crc64:00563d1b8de0aba2
//crc64_with_comments:c2ab1e0d605813ee
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@query.h"
#include "cl/C@scope@cdef@ub1748b6df09c2d0_0.h"
#include "cl/C@scope@mariadb.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@connect.h"
#include "o_73/RuntimeException@@__construct.h"
extern string v$const_string$us3a892467aaab7f88;

extern string v$const_string$us553e93901e462a6e;

extern string v$const_string$us97f678bf97ce186b;

extern string v$const_string$us98250b0c092a82a3;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [Mariadb.php]
//80:     public function query(string $sql)
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
//81:     {
//82:         $kphpworkaroundCdef = \FFI::cdef('
  v$kphpworkaroundCdef = ({
    ffi_load_scope_symbols(f$FFI$$load(v$const_string$us553e93901e462a6e), 0, 75, 1);
    f$FFI$$scope(v$const_string$us97f678bf97ce186b);
  });
//83:           char * string_array_get(char** arr, int i);
//84:         ', 'libkphpworkaround.so');
//85: 
//86:         $this->connect();
  TRY_CALL_VOID_ (f$Zjsxwc$Mariadb$Mariadb$$connect(v$this), return {});
//87: 
//88:         /** @var ffi_cdata<mariadb, struct st_mysql*> $conn */
  ;
//89:         $conn = $this->_conn;
  v$conn = v$this->$_conn;
//90:         if ($this->corelib->mysql_query($conn, $sql)) {
  if (f$boolval (ffi_c2php(FFI_CALL(reinterpret_cast<int32_t (*)(struct ffi_mariadb_st_mysql*, const char*)>(ffi_env_instance.symbols[28].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$sql, ffi_tag<const char*>{})))))) {
//91:             throw new RuntimeException(sprintf("Error mysql_query %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us3a892467aaab7f88, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 91_i64));
      return {};
    }
    ;
  };
//92:         }
//93:         /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
  ;
//94:         $result = $this->corelib->mysql_store_result($conn);
  v$result = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql_res* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[71].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//95:         $numFields = $this->corelib->mysql_num_fields($result);
  v$numFields = ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[24].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//96: 
//97:         $row = $this->corelib->mysql_fetch_row($result);
  v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//98:         /** @var string[][] $resultArray */
  ;
//99:         $resultArray = [];
  v$resultArray = v$const_array$us68788cf2824807c5;
//100: 
//101:         while ($row !== null) {
  while (!!(!f$is_null(v$row))) {
//102:             /** @var string[] $rowstrArray */
    ;
//103:             $rowstrArray = [];
    v$rowstrArray = v$const_array$us68788cf2824807c5;
//104:             for ($j = 0; $j < $numFields; $j++) {
    for (v$j = 0_i64; v$j < v$numFields; ++v$j) {
//105:                 $cstr = $kphpworkaroundCdef->string_array_get($row, $j);
      v$cstr = ffi_c2php(FFI_CALL(reinterpret_cast<char* (*)(char**, int32_t)>(ffi_env_instance.symbols[75].ptr)(ffi_php2c(check_not_null (v$row), ffi_tag<C$FFI$CData<char**>>{}), ffi_php2c(v$j, ffi_tag<int32_t>{}))));
//106:                 $phpstr = \FFI::string($cstr);
      v$phpstr = f$FFI$$string(v$cstr);
//107:                 $rowstrArray[] = $phpstr;
      (v$rowstrArray).push_back (v$phpstr);
    };
//108:             }
//109:             $resultArray[] = $rowstrArray;
    (v$resultArray).push_back (v$rowstrArray);
//110:             $row = $this->corelib->mysql_fetch_row($result);
    v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
  };
//111:         }
//112:         $this->corelib->mysql_free_result($result);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[16].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{})));
//113: 
//114:         return $resultArray;
  return v$resultArray;
}


