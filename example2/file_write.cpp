#include<iostream>
#include<fstream>
#include<cstdlib>
#include<unistd.h>


using namespace std;

void write(const char* file_name, int counter)
{
  ofstream stream;
  cout<<"File Name:"<<file_name<<endl;
  try{
  stream.open(file_name, ios::out);
  int index = 0;
  if(stream.is_open()){
    while( index < counter){
      stream << "Index:" << index <<endl;
      index++;
      usleep(10);
    }
    stream.close();
  }
  } catch ( exception& e ){
    cout<<"EXCEPTION:"<<e.what()<<endl;
  }
}

int main(int argc, const char* argv[])
{
  const char* file_name = argv[1];
  int counter = atoi(argv[2]);
  write(file_name, counter);
  return 0;
}
