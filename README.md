
#### prepare

```bash
yay -S mariadb-clients

gcc kphpworkaround.c  -fPIC -shared -o libkphpworkaround.so
sudo cp ./libkphpworkaround.so /usr/lib/
```

#### compile

```bash
docker run -ti -v ~/kphp-project/:/tmp/dev:rw vkcom/kphp
cd /tmp/dev/kphp-ffi-mysql-mariadb
kphp --enable-ffi  --mode cli main.php 
```

#### run

```bash
./kphp_out/cli 
```
