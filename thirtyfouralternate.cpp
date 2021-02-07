#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int fact(int num);
int main(){
int number;
cout<<"Enter the value of n :";
cin>>number;
fact(number);
cout<<endl<<fact(number)<<endl;
return 0;
}
int fact(int num){

int factorial = num;
if(num == 1 || num == 0){
    return 1;
}
return num * fact(num -1);
}