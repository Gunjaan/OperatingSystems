#include<stdio.h>
#include<unistd.h>
int main(){
int n;
n= write(1,"Hello! My name is Gunjan\n",25);
printf("The value of n is %d", n);
}

