#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int fact(int num);
int main(){
int number,r;
int combination;
cout<<"Enter the value of ^nCr:";
cin>>number>>r;
 combination = fact(number)/(fact(number - r)*fact(r));
 cout<<endl<<"The value of combination is "<< combination<<endl;
return 0;
}
int fact(int num){

int factorial = num;
if(num == 1 || num == 0){
    return 1;
}
return num * fact(num -1);
}