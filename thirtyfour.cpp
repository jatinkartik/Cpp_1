#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void fact(int num);
int main(){
int number;
cout<<"Enter the value of n :";
cin>>number;
fact(number);
return 0;
}
void fact(int num){

int factorial =1;
for(int i = 1; i <= num; i++){
factorial *= i;
}
cout<<endl<<factorial<<ends;
}