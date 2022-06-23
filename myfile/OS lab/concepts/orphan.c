#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
pid_t p;
p=fork(); // fork will return 2 values of p, one for child and one for parent.

if(p==0){
    sleep(2);
    printf("PID of child:  %d\n",getpid()); // pid for child's process ID
    printf("PID of parent: %d\n",getppid()); // ppid for parent's process ID
} // Child process, value of p==0

else {
    printf("\nI am parent. \n");
    printf("PID of child: %d\n",p);
    printf("PID of parent: %d\n",getpid());
} // parent process, value of p==1

printf("hello! \n");
}
