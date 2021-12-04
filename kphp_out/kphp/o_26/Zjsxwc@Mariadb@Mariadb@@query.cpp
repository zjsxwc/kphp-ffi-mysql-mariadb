//crc64:142da136184987bc
//crc64_with_comments:9fc2f253df689c97
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@query.h"
#include "cl/C@scope@mariadb.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@connect.h"
#include "o_73/RuntimeException@@__construct.h"
extern string v$const_string$us3a892467aaab7f88;

extern string v$const_string$us98250b0c092a82a3;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [Mariadb.php]
//82:     public function query(string $sql)
array< array< string > > f$Zjsxwc$Mariadb$Mariadb$$query(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this, string const &v$sql) noexcept  {
  CDataPtr<struct ffi_mariadb_st_mysql> v$conn;
  CDataPtr<char> v$cstr;
  int64_t v$j = 0;
  int64_t v$numFields = 0;
  string v$phpstr;
  CDataPtr<struct ffi_mariadb_st_mysql_res> v$result;
  array< array< string > > v$resultArray;
  CDataPtr<char*> v$row;
  array< string > v$rowstrArray;
//83:     {
//84:         $this->connect();
  TRY_CALL_VOID_ (f$Zjsxwc$Mariadb$Mariadb$$connect(v$this), return {});
//85: 
//86:         /** @var ffi_cdata<mariadb, struct st_mysql*> $conn */
  ;
//87:         $conn = $this->_conn;
  v$conn = v$this->$_conn;
//88:         if ($this->corelib->mysql_query($conn, $sql)) {
  if (f$boolval (ffi_c2php(FFI_CALL(reinterpret_cast<int32_t (*)(struct ffi_mariadb_st_mysql*, const char*)>(ffi_env_instance.symbols[29].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$sql, ffi_tag<const char*>{})))))) {
//89:             throw new RuntimeException(sprintf("Error mysql_query %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn)));
    {
      THROW_EXCEPTION (__exception_set_location(f$RuntimeException$$__construct(class_instance<C$RuntimeException>().alloc(), f$sprintf(v$const_string$us3a892467aaab7f88, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[11].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))))))), v$const_string$us98250b0c092a82a3, 89_i64));
      return {};
    }
    ;
  };
//90:         }
//91:         /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
  ;
//92:         $result = $this->corelib->mysql_store_result($conn);
  v$result = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql_res* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[72].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//93:         $numFields = $this->corelib->mysql_num_fields($result);
  v$numFields = ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[25].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//94: 
//95:         $row = $this->corelib->mysql_fetch_row($result);
  v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[14].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//96:         /** @var string[][] $resultArray */
  ;
//97:         $resultArray = [];
  v$resultArray = v$const_array$us68788cf2824807c5;
//98: 
//99:         while ($row !== null) {
  while (!!(!f$is_null(v$row))) {
//100:             /** @var string[] $rowstrArray */
    ;
//101:             $rowstrArray = [];
    v$rowstrArray = v$const_array$us68788cf2824807c5;
//102:             for ($j = 0; $j < $numFields; $j++) {
    for (v$j = 0_i64; v$j < v$numFields; ++v$j) {
//103:                 $cstr = $this->kphpworkaroundlib->string_array_get($row, $j);
      v$cstr = ffi_c2php(FFI_CALL(reinterpret_cast<char* (*)(char**, int32_t)>(ffi_env_instance.symbols[0].ptr)(ffi_php2c(check_not_null (v$row), ffi_tag<C$FFI$CData<char**>>{}), ffi_php2c(v$j, ffi_tag<int32_t>{}))));
//104:                 $phpstr = \FFI::string($cstr);
      v$phpstr = f$FFI$$string(v$cstr);
//105:                 $rowstrArray[] = $phpstr;
      (v$rowstrArray).push_back (v$phpstr);
    };
//106:             }
//107:             $resultArray[] = $rowstrArray;
    (v$resultArray).push_back (v$rowstrArray);
//108:             $row = $this->corelib->mysql_fetch_row($result);
    v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[14].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
  };
//109:         }
//110:         $this->corelib->mysql_free_result($result);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[17].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{})));
//111: 
//112:         return $resultArray;
  return v$resultArray;
}


