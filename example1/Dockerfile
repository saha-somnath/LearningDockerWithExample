FROM ubuntu:latest
RUN apt-get update && \
    apt-get install -y build-essential g++
WORKDIR /src
COPY example.cpp ./
RUN g++ example.cpp  -o example
ENTRYPOINT ["./example"]
