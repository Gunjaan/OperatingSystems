#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd, fd1;
	
	fd=open("test.txt",O_RDONLY);
	printf("OLD FILE DESCRIPTOR: %d\n", fd);
	
	fd1=dup2(fd,8);
	//dup2 is used to set a file descriptor of our own choice

	printf("NEW FILE DESCRIPTOR: %d\n", fd1);
}
