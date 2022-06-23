#include <stdio.h>
#include <stdlib.h>
#define BUFFERSIZE 3
int buffer[BUFFERSIZE];
int in = 0;
int out = 0;
int counter=0;
 
void producer(int a){
 if(counter == BUFFERSIZE){
 printf("BUFFER IS FULL!\n");}
 else{
 buffer[in]=a;
 in = (in + 1) % BUFFERSIZE;
 counter++;
}
}
 
void display(){
 printf("Buffer: ");
 for(int i=0;i<BUFFERSIZE;i++)
 {
   printf("%d\t",buffer[i]);
 }
 printf("\nin:%d\n",in);
 printf("out:%d\n",out);
}
 
void consumer(){
if (counter == 0)
printf("BUFFER IS EMPTY!\n");
else{
buffer[out]=0;
out = (out + 1) % BUFFERSIZE;}
counter--;
}
 
int main() {
int a,n;
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
}
} while(n!=3);
return 0;
   }
