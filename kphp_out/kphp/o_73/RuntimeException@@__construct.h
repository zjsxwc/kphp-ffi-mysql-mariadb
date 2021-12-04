//crc64:dc51efe107b3e22c
//crc64_with_comments:630b311ba0ed0ade
#pragma once
#include "runtime-headers.h"
extern string v$const_string$us553e93901e462a6e;

inline class_instance<C$RuntimeException> f$RuntimeException$$__construct(class_instance<C$RuntimeException> const &v$this, string const &v$message = v$const_string$us553e93901e462a6e, int64_t v$code = 0_i64) noexcept ;
//source = [/usr/share/vkontakte/kphp_source/functions_spl.txt]
//21: class RuntimeException extends Exception {}
class_instance<C$RuntimeException> f$RuntimeException$$__construct(class_instance<C$RuntimeException> const &v$this, string const &v$message, int64_t v$code) noexcept  {
  f$Exception$$__construct(v$this, v$message, v$code);
  return v$this;
}


