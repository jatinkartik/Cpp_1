#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int number,remainder,temp,reverse =0;
cout<<"Enter the number :";
cin>>number;
temp = number;
while(number!= 0){
    reverse = reverse*10;
    remainder = number%10;
    reverse = reverse + remainder;
    number = number/10;
}
printf("The reverse number is %d",reverse);
return 0;
}