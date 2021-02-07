#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int number,remainder,temp,reverse =0;
int count = 0;
cout<<"Enter the number :";
cin>>number;
temp = number;
for(int i = 1; i > 0; i++ ){
number = number/10;
if(number == 0){
    break;
}
count++;
}
for(int j = 0; j <= count; j++){
    reverse = reverse*10;
    remainder = temp%10;
    reverse = reverse + remainder;
    temp = temp/10;
}
cout<<endl<<"The reverse number is" << reverse <<endl;
return 0;
}