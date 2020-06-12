# Learning Docker With Example 


## Docker Basic Command

### Build Image
```
  %> docker build --tag <CONTAINER NAME>:<VERSION>  <Dockerfile Path>
```

### Run application from a docker container.
```
  Basic command to run a application from a container.
  %> docker run <CONTAINER NAME>:<VERSION>
  Pass parameter to the running application as below.
  %> docker run <CONTAINER NAME>:<VERSION>  <param1> <param2> <param-n>
  

```

#### Commands on checking running container
```
  List of running application
  %>docker ps
  Stop docker application
  %>docker stop <CONTAINER ID>
  Remove container
  %>docker rm <CONTAINER ID>

  Attch to a running container
  %>docker attch <CONTAINER ID>
```

### Push image to docker registry

### Publish image 

