
#### prepare

```bash
yay -S mariadb-clients

gcc arrayworkaround.c  -fPIC -shared -o libarrayworkaround.so
sudo cp ./libarrayworkaround.so /usr/lib/
```

#### compile

```bash
kphp --enable-ffi  --mode cli main.php 
```

### run

```bash
./kphp_out/cli 
```
