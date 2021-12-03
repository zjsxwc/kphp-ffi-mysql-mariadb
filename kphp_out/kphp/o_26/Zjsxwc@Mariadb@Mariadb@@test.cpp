//crc64:705732ed92e359e3
//crc64_with_comments:1237ddd2c8c7bc9f
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@test.h"
#include "cl/C@scope@mariadb.h"
extern string v$const_string$us127d4c5be47127fc;

extern string v$const_string$us26a538165cebcfbe;

extern string v$const_string$us3a892467aaab7f88;

extern string v$const_string$us553e93901e462a6e;

extern string v$const_string$us909365bfe47614c4;

extern string v$const_string$usb4258bb91cd13ab;

extern string v$const_string$usba2bb85dba64384;

extern string v$const_string$usf8e5e1651bd01df3;

extern string v$const_string$usfa3590f20c4d7282;

extern string v$const_string$usff5c5a0e3e83b8f0;

//source = [Mariadb.php]
//14:     public function test() {
void f$Zjsxwc$Mariadb$Mariadb$$test(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this) noexcept  {
  CDataPtr<char**> v$addr;
  CDataPtr<struct ffi_mariadb_st_mysql> v$conn;
  int64_t v$i = 0;
  int64_t v$numFields = 0;
  CDataPtr<struct ffi_mariadb_st_mysql_res> v$result;
  CDataPtr<char*> v$row;
  CDataPtr<char> v$s;
  string v$ss;
//15:         /** @var ffi_cdata<mariadb, struct MYSQL*> $conn */
  ;
//16:         $conn = $this->corelib->mysql_init(null);
  v$conn = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[19].ptr)(nullptr)));
//17:         if ($conn === null) {
  if (!(!f$is_null(v$conn))) {
//18:             echo sprintf("Error mysql_init %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn) );
    {
      f$echo(f$sprintf(v$const_string$usb4258bb91cd13ab, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(nullptr))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(nullptr))))));
    };
  };
//19:         }
//20: 
//21: 
//22:         if ($this->corelib->mysql_real_connect($conn, "192.168.33.77", "root", "root","",3306,"",0) === null) {
  if (equals (ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql* (*)(struct ffi_mariadb_st_mysql*, const char*, const char*, const char*, const char*, uint32_t, const char*, uint64_t)>(ffi_env_instance.symbols[31].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$const_string$usba2bb85dba64384, ffi_tag<const char*>{}), ffi_php2c(v$const_string$usfa3590f20c4d7282, ffi_tag<const char*>{}), ffi_php2c(v$const_string$usfa3590f20c4d7282, ffi_tag<const char*>{}), ffi_php2c(v$const_string$us553e93901e462a6e, ffi_tag<const char*>{}), ffi_php2c(3306_i64, ffi_tag<uint32_t>{}), ffi_php2c(v$const_string$us553e93901e462a6e, ffi_tag<const char*>{}), ffi_php2c(0_i64, ffi_tag<uint64_t>{})))), Optional<bool>{})) {
//23:             echo sprintf("Error mysql_real_connect %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn) );
    {
      f$echo(f$sprintf(v$const_string$us26a538165cebcfbe, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))))));
    };
  };
//24:         }
//25:         if ($this->corelib->mysql_query($conn, "show databases")) {
  if (f$boolval (ffi_c2php(FFI_CALL(reinterpret_cast<int32_t (*)(struct ffi_mariadb_st_mysql*, const char*)>(ffi_env_instance.symbols[28].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}), ffi_php2c(v$const_string$us909365bfe47614c4, ffi_tag<const char*>{})))))) {
//26:             echo sprintf("Error mysql_query %u: %s\n ", $this->corelib->mysql_errno($conn), $this->corelib->mysql_error($conn) );
    {
      f$echo(f$sprintf(v$const_string$us3a892467aaab7f88, array< mixed >::create(ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[9].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))), ffi_c2php(FFI_CALL(reinterpret_cast<const char* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[10].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})))))));
    };
  };
//27:         }
//28:         /** @var ffi_cdata<mariadb, struct MYSQL_RES*> $result */
  ;
//29:         $result = $this->corelib->mysql_store_result($conn);
  v$result = ffi_c2php(FFI_CALL(reinterpret_cast<struct ffi_mariadb_st_mysql_res* (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[71].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{}))));
//30: 
//31:         $numFields = $this->corelib->mysql_num_fields($result);
  v$numFields = ffi_c2php(FFI_CALL(reinterpret_cast<uint32_t (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[24].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//32:         var_dump($numFields);
  f$var_dump(v$numFields);
//33:         $row = $this->corelib->mysql_fetch_row($result);
  v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
//34: //
//35: //        $cdef = \FFI::cdef('
//36: //  int printf(const char **format, ...);
//37: //', 'libc.so');
//38: 
//39:         $i = 1;
  v$i = 1_i64;
//40:         while ($row !== null) {
  while (!!(!f$is_null(v$row))) {
//41:             $addr = \FFI::addr($row);
    v$addr = ffi_addr(check_not_null (v$row));
//42:             $s = \FFI::cast('char *', $addr);
    v$s = ffi_cast<char*>(v$addr);
//43:             $ss = \FFI::string($s);
    v$ss = f$FFI$$string(v$s);
//44:             echo $i." ". $ss."\n " ;
    {
      f$echo(({
        const string &tmp_var0=v$ss;
        string::size_type tmp_strlen = 22 + max_string_size (tmp_var0);
        string tmp_string = string (tmp_strlen, true).append_unsafe (v$i).append_unsafe (" ", 1).append_unsafe (tmp_var0).append_unsafe ("\n", 1).finish_append();
        tmp_string;
      }));
    };
//45: //            $cdef->printf($row);
//46:             $i++;
    ++v$i;
//47:             $row = $this->corelib->mysql_fetch_row($result);
    v$row = ffi_c2php(FFI_CALL(reinterpret_cast<char** (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[13].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{}))));
  };
//48:         }
//49: 
//50:         $this->corelib->mysql_free_result($result);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql_res*)>(ffi_env_instance.symbols[16].ptr)(ffi_php2c(v$result, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql_res*>>{})));
//51:         $this->corelib->mysql_close($conn);
  FFI_CALL(reinterpret_cast<void (*)(struct ffi_mariadb_st_mysql*)>(ffi_env_instance.symbols[4].ptr)(ffi_php2c(v$conn, ffi_tag<C$FFI$CData<struct ffi_mariadb_st_mysql*>>{})));
//52: 
//53:         echo "OK";
  {
    f$echo(v$const_string$us127d4c5be47127fc);
  };
  return ;
}


