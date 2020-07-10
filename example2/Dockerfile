FROM ubuntu:latest
RUN apt-get update && \
    apt-get install -y build-essential g++
RUN mkdir /app
WORKDIR /app
COPY file_write.cpp ./
RUN g++ file_write.cpp -o write
ENTRYPOINT ["./write"]
CMD ["file.out","10"]
