#include<unistd.h>
#include<stdio.h>
int main(){
char b[30];
read(0,b,12);
write(1,b,12);
}
