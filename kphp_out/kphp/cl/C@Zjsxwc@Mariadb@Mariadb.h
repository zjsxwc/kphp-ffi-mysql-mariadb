//crc64:5b9486596a498044
//crc64_with_comments:0000000000000000
#pragma once
struct C$FFI$Scope;

struct C$Zjsxwc$Mariadb$Mariadb: public refcountable_php_classes<C$Zjsxwc$Mariadb$Mariadb> {
  string $host{};
  string $user{};
  string $password{};
  string $databaseName{};
  int64_t $port{};
  class_instance<C$FFI$Scope> $corelib{};
  const char *get_class() const  noexcept {
    return R"(Zjsxwc\Mariadb\Mariadb)";
  }

  int get_hash() const  noexcept {
    return -1719519820;
  }

  };
#include "cl/C@scope@mariadb.h"

