#include<stdio.h>
#include <string.h>
#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
  string name = "Gunjan";
  int rn = 201315;
  string uni = "Jaypee University of Information Technology";
  cout<<name<<endl;
  fork();
  cout<<rn<<endl;
  fork();
  cout<<uni<<endl;
}