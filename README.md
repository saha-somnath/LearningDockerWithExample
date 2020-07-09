# Learning Docker With Example 


## Docker Basic Command

### Docker Registration

### Docker Login 


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


### Create Repository
```
 Creating repository from docker website directly.
 Open the link https://hub.docker.com/
 Login to the docker with your credentials
 Click on repository tab and select Public or Private repository.

 
```

### Docker Registry
```
 Start Registry:
 %>docker run -d -p 5000:5000 --restart=always --name registry registry:2

 Tag existing image: 
 %>docker tag example-image localhost:5000/example
 
 Push image to registry:
 %>docker push example-image localhost:5000/example

 Remove localy cached example-image and localhost:5000/example
 %>docker image remove example-image
 %>docker image remove localhost:5000/example
 
```
### Push image to Docker Hub

### Publish image 

