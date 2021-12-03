//crc64:53eb9f7537661508
//crc64_with_comments:0000000000000000
#pragma once
#include "runtime/ffi.h"
extern "C" {
struct ffi_mariadb_st_mysql_field {
  char* name;
  char* org_name;
  char* table;
  char* org_table;
  char* db;
  char* catalog;
  char* def;
  uint64_t length;
  uint64_t max_length;
  uint32_t name_length;
  uint32_t org_name_length;
  uint32_t table_length;
  uint32_t org_table_length;
  uint32_t db_length;
  uint32_t catalog_length;
  uint32_t def_length;
  uint32_t flags;
  uint32_t decimals;
  uint32_t charsetnr;
  int32_t type;
  void* extension;
};
struct ffi_mariadb_st_mysql_stmt;
struct ffi_mariadb_st_mysql_res;
struct ffi_mariadb_st_mysql;
}

