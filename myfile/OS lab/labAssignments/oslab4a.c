#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
pid_t p;
p=fork();

if(p==0){
    sleep(2);
    printf("I am the child process with PID %d.\n",getpid());
    printf("My Parent has terminated.\n");
    printf("I am an orphan process now.\n");
    printf("My Parent’s process ID is %d.\n",getppid()); 
} 

else {
    printf("\nI am parent process with PID %d\n", getpid());
    printf("My child's PID is %d\n",p);
}
}