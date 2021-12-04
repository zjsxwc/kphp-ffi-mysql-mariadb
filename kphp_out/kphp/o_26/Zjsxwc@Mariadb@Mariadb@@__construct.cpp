//crc64:74cbf41af8f35a91
//crc64_with_comments:2c546ac289500fd7
#include "runtime-headers.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@__construct.h"
#include "o_26/Zjsxwc@Mariadb@Mariadb@@loadCoreLib.h"
extern string v$const_string$us5d9a1204c6893d57;

//source = [Mariadb.php]
//37:     public function __construct(string $host, string $user, string $password, int $port = 3306, string $databaseName = "")
class_instance<C$Zjsxwc$Mariadb$Mariadb> f$Zjsxwc$Mariadb$Mariadb$$__construct(class_instance<C$Zjsxwc$Mariadb$Mariadb> const &v$this, string const &v$host, string const &v$user, string const &v$password, int64_t v$port, string const &v$databaseName) noexcept  {
//38:     {
//39:         self::loadCoreLib();
  f$Zjsxwc$Mariadb$Mariadb$$loadCoreLib();
//40:         $this->corelib = \FFI::scope('mariadb');
  v$this->$corelib = f$FFI$$scope(v$const_string$us5d9a1204c6893d57);
//41: 
//42:         $this->host = $host;
  v$this->$host = v$host;
//43:         $this->user = $user;
  v$this->$user = v$user;
//44:         $this->password = $password;
  v$this->$password = v$password;
//45:         $this->port = $port;
  v$this->$port = v$port;
//46:         $this->databaseName = $databaseName;
  v$this->$databaseName = v$databaseName;
  return v$this;
}


