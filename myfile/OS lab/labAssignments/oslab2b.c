#include "stdio.h"
#include "sys/types.h"
#include "unistd.h"
int main(){
  printf("Hello World!\n");
  printf("I am the parent process and pid is : %d\n", getpid());
  printf("Here i am before use of forking\n");
  int var = fork();
  printf("Here I am just after forking\n");
  if (var==0)
  printf("I am the child process and pid is :%d.\n", getpid());
  else
  printf("I am the parent process and pid is :%d.\n", getpid());
}