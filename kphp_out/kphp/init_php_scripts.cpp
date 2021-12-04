//crc64:eafea7454dc30668
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"
#include "server/php-script.h"
#include "o_64/src_mainead571f11daa89a8.h"
#include "runtime/ffi.h"
#include "dlfcn.h"

void global_init_php_scripts() noexcept ;
void init_php_scripts() noexcept ;

void const_vars_init() noexcept ;

void tl_str_const_init() noexcept ;
const char *get_php_scripts_version() noexcept {
  return "unknown";
}

char **get_runtime_options(int *count) noexcept {
  return nullptr;
}

void global_init_php_scripts()  noexcept {
  const_vars_init();
  ffi_env_instance = FFIEnv{2, 76};
  ffi_env_instance.funcs.dlopen = dlopen;
  ffi_env_instance.funcs.dlsym = dlsym;
  ffi_env_instance.libs[0].path = "libkphpworkaround.so";
  ffi_env_instance.libs[1].path = "libmariadb.so";
  ffi_env_instance.symbols[75].name = "string_array_get";
  ffi_env_instance.symbols[0].name = "mysql_autocommit_cont";
  ffi_env_instance.symbols[1].name = "mysql_autocommit_start";
  ffi_env_instance.symbols[2].name = "mysql_change_user_cont";
  ffi_env_instance.symbols[3].name = "mysql_change_user_start";
  ffi_env_instance.symbols[4].name = "mysql_close";
  ffi_env_instance.symbols[5].name = "mysql_close_cont";
  ffi_env_instance.symbols[6].name = "mysql_close_start";
  ffi_env_instance.symbols[7].name = "mysql_commit_cont";
  ffi_env_instance.symbols[8].name = "mysql_commit_start";
  ffi_env_instance.symbols[9].name = "mysql_errno";
  ffi_env_instance.symbols[10].name = "mysql_error";
  ffi_env_instance.symbols[11].name = "mysql_fetch_fields";
  ffi_env_instance.symbols[12].name = "mysql_fetch_lengths";
  ffi_env_instance.symbols[13].name = "mysql_fetch_row";
  ffi_env_instance.symbols[14].name = "mysql_fetch_row_cont";
  ffi_env_instance.symbols[15].name = "mysql_fetch_row_start";
  ffi_env_instance.symbols[16].name = "mysql_free_result";
  ffi_env_instance.symbols[17].name = "mysql_free_result_cont";
  ffi_env_instance.symbols[18].name = "mysql_free_result_start";
  ffi_env_instance.symbols[19].name = "mysql_init";
  ffi_env_instance.symbols[20].name = "mysql_kill_cont";
  ffi_env_instance.symbols[21].name = "mysql_kill_start";
  ffi_env_instance.symbols[22].name = "mysql_next_result_cont";
  ffi_env_instance.symbols[23].name = "mysql_next_result_start";
  ffi_env_instance.symbols[24].name = "mysql_num_fields";
  ffi_env_instance.symbols[25].name = "mysql_options";
  ffi_env_instance.symbols[26].name = "mysql_ping_cont";
  ffi_env_instance.symbols[27].name = "mysql_ping_start";
  ffi_env_instance.symbols[28].name = "mysql_query";
  ffi_env_instance.symbols[29].name = "mysql_read_query_result_cont";
  ffi_env_instance.symbols[30].name = "mysql_read_query_result_start";
  ffi_env_instance.symbols[31].name = "mysql_real_connect";
  ffi_env_instance.symbols[32].name = "mysql_real_connect_cont";
  ffi_env_instance.symbols[33].name = "mysql_real_connect_start";
  ffi_env_instance.symbols[34].name = "mysql_real_query_cont";
  ffi_env_instance.symbols[35].name = "mysql_real_query_start";
  ffi_env_instance.symbols[36].name = "mysql_refresh_cont";
  ffi_env_instance.symbols[37].name = "mysql_refresh_start";
  ffi_env_instance.symbols[38].name = "mysql_rollback_cont";
  ffi_env_instance.symbols[39].name = "mysql_rollback_start";
  ffi_env_instance.symbols[40].name = "mysql_select_db_cont";
  ffi_env_instance.symbols[41].name = "mysql_select_db_start";
  ffi_env_instance.symbols[42].name = "mysql_send_query_cont";
  ffi_env_instance.symbols[43].name = "mysql_send_query_start";
  ffi_env_instance.symbols[44].name = "mysql_set_character_set_cont";
  ffi_env_instance.symbols[45].name = "mysql_set_character_set_start";
  ffi_env_instance.symbols[46].name = "mysql_set_server_option_cont";
  ffi_env_instance.symbols[47].name = "mysql_set_server_option_start";
  ffi_env_instance.symbols[48].name = "mysql_shutdown_cont";
  ffi_env_instance.symbols[49].name = "mysql_shutdown_start";
  ffi_env_instance.symbols[50].name = "mysql_stat_cont";
  ffi_env_instance.symbols[51].name = "mysql_stat_start";
  ffi_env_instance.symbols[52].name = "mysql_stmt_close_cont";
  ffi_env_instance.symbols[53].name = "mysql_stmt_close_start";
  ffi_env_instance.symbols[54].name = "mysql_stmt_execute_cont";
  ffi_env_instance.symbols[55].name = "mysql_stmt_execute_start";
  ffi_env_instance.symbols[56].name = "mysql_stmt_fetch_cont";
  ffi_env_instance.symbols[57].name = "mysql_stmt_fetch_start";
  ffi_env_instance.symbols[58].name = "mysql_stmt_free_result_cont";
  ffi_env_instance.symbols[59].name = "mysql_stmt_free_result_start";
  ffi_env_instance.symbols[60].name = "mysql_stmt_init";
  ffi_env_instance.symbols[61].name = "mysql_stmt_next_result_cont";
  ffi_env_instance.symbols[62].name = "mysql_stmt_next_result_start";
  ffi_env_instance.symbols[63].name = "mysql_stmt_prepare_cont";
  ffi_env_instance.symbols[64].name = "mysql_stmt_prepare_start";
  ffi_env_instance.symbols[65].name = "mysql_stmt_reset_cont";
  ffi_env_instance.symbols[66].name = "mysql_stmt_reset_start";
  ffi_env_instance.symbols[67].name = "mysql_stmt_send_long_data_cont";
  ffi_env_instance.symbols[68].name = "mysql_stmt_send_long_data_start";
  ffi_env_instance.symbols[69].name = "mysql_stmt_store_result_cont";
  ffi_env_instance.symbols[70].name = "mysql_stmt_store_result_start";
  ffi_env_instance.symbols[71].name = "mysql_store_result";
  ffi_env_instance.symbols[72].name = "mysql_store_result_cont";
  ffi_env_instance.symbols[73].name = "mysql_store_result_start";
  ffi_env_instance.symbols[74].name = "mysql_use_result";
}

void f$src_mainead571f11daa89a8$run()  noexcept {
  TRY_CALL_VOID (void, f$src_mainead571f11daa89a8());
  finish (0, true);
}

void f$src_mainead571f11daa89a8$global_reset()  noexcept {
  void f$src_mainead571f11daa89a8$global_vars_reset();
  f$src_mainead571f11daa89a8$global_vars_reset();
}

void init_php_scripts()  noexcept {
  f$src_mainead571f11daa89a8$global_reset();
  set_script (f$src_mainead571f11daa89a8$run, f$src_mainead571f11daa89a8$global_reset);
}
