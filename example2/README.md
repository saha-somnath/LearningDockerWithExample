## Volume Management
# Transient data
# Permanenet Storage ( Storaing file to host filesystem )

###Build container imagei
```
 cd example2
 docker build --tag example .
```
###Run app in container
```
 mkdir /data
 docker run --rm  -v /data:/data example /data/file.txt  1000
```
