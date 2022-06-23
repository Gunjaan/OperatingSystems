#include<stdio.h>
#include <string.h>
#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
  int var = fork();
  if(var==0){
    cout<<"Hey, Hello: I am the child process \n";
  }
  else{
  cout<<"Hey, Hello: I am the parent process \n";}
}