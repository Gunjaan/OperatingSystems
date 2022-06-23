// PRODUCER CONSUMER PROBLEM
#include <stdio.h>
#include <stdlib.h>
#define BUFFERSIZE 3
int buffer[BUFFERSIZE];
int in = 0;
int out = 0;

void producer(int a){
  if((in+1)%BUFFERSIZE==out)
  printf("BUFFER IS FULL!\n");
  buffer[in]=a;
  in = (in + 1) % BUFFERSIZE;
}

void display(){
  for(int i=0;i<BUFFERSIZE;i++)
  {
    printf("%d\t",buffer[i]);
  }
  printf("\nin:%d\n",in);
  printf("out:%d\n",out);
 }

void consumer(){
if (in == out)
printf("BUFFER IS EMPTY!\n");
else{
buffer[out]=0;
out = (out + 1) % BUFFERSIZE;}
}



int main() {
int a,n=3;
printf("1.Producer\n2.Consumer\n3.Exit\n");
do{
printf("\nSELECT 1, 2 OR 3\n");
scanf("%d", &n);
switch(n)
{
    case 1: 
    printf("Produce an integer item: ");
    scanf("%d",&a);
    producer(a);
    display();
    break;
    
    case 2: 
    consumer();
    display();
    break;
    
    case 3:
    exit(0);
    break;
}} while(n!=3);
return 0;
}



