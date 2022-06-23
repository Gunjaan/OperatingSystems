#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
int main(){
  printf("OS Lab! \n");
  int var = fork();
  if (var == 0) // child process
  {
    printf("We are using wait() system call \n");
    printf("I am child process with PID %d. \n", getpid());
  }
  else // parent process
  {
    wait(NULL);
    printf("We are using wait() system call \n");
    printf("I am parent process with PID %d. \n", getpid());
  }

}