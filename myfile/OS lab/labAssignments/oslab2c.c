#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
  fork();
  printf("I am the current process %d and my parent process is %d\n", getpid(), getppid());
}