#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<iostream>
using namespace std;
int main(){
  pid_t p;
  p = fork();
  if (p==0){ // child process
    cout<<"\nI'm child process"<<endl;
    cout<<"PID of child:" <<getpid()<<endl;
    cout<<"PID of parent:" <<getppid()<<endl;
  }
  else{ //parent process
    sleep(2);
    cout<<"\nI'm parent process"<<endl;
    cout<<"PID of parent:" <<getpid()<<endl;   
    cout<<"PID of child:" <<p<<endl; 
  }
}