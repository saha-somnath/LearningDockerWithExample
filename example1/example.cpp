#include<iostream>
#include<unistd.h>

using namespace std;


int main( int argc, const char* argv[])
{
  long count = 0;
  while(true){
    count++;
    cout<<"Count:"<<count<<endl;
    usleep(1000*1000); // sleep for 100 micro seconds  
  }
  return 0;
}
