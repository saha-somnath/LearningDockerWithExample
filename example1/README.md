## Basic Example of containerization

 Example1:
 
 Compilation:
 ```
 g++ example1.cpp -o example1 
 ```
 
 Execution:
 ```
 ./example1
 ```


### Containarize this application.
 
#### Create Docker image
```
   %> docker build --tag example:1.0 .
```
#### Check docker image
```
   %> docker images

   REPOSITORY                           TAG                 IMAGE ID            CREATED             SIZE
   example                              1.0                 0154f67369bf        2 minutes ago       305MB
```
#### Run application through docker images.
```
   # Remove docker image after finished by using --rm switch. 
   %> docker run --rm example:1.0 

   # Stop running application
   %>docker ps
   CONTAINER ID      IMAGE      COMMAND        CREATED             STATUS         PORTS     NAMES
   4198732cd27c    example:1.0  "./example"    14 seconds ago      Up 13 seconds            xyz
   %>docker stop  4198732cd27c
   
```
### Push image to Docker Hub:
```
   # Create a tag
   %>docker tag example1:1.0 somnath83/docker_example:example1

   # Push image to repository
   %> docker push <Docker Hub UserId>/<Repository>:example1
   %> docker push somnath83/docker_example:example1

   # Check it from your Docker Hub page: 
``` 

### Docker Registry:
```
 Start Registry:
 %>docker run -d -p 5000:5000 --restart=always --name registry registry:2

 Tag existing image: 
 %>docker tag example:1.0 localhost:5000/example
 
 Push image to registry:
 %>docker push example:1.0 localhost:5000/example

 Remove localy cached example-image and localhost:5000/example
 %>docker image remove example:1.0
 %>docker image remove localhost:5000/example

 Pull image from local registry:
 %>docker pull localhost:5000/example

```




