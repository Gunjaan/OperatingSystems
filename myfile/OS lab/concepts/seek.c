#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main(){
	int n,f,f1;
	char buff[20];
	f=open("test.txt",O_RDWR); //Hello everyone! My name is Gunjan.
	f1=lseek(f,10,SEEK_SET);
	printf("the position of cursor: %d\n",f1);
	read(f,buff,10); //Hello ever

	lseek(f,10,SEEK_CUR); //cursor moved 10 places 

	//lseek changes position of cursor
	//SEEK_CUR = from cursor's current position
	//SEEK_SET = from starting
	//SEEK_END = from ending

        write(1,buff,10); //yone! My n
}
