#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int number,arm =0,temp;
cout<<"Enter the number :";
cin>>number;
temp = number;
int arr[9],i=0;
while(number!= 0){
    arr[i] = number%10;
    number = number/10;
    i++;
}
for(int j = 0; j < i; j++){
    arm += arr[j]*arr[j]*arr[j];
}
if(arm==temp){
    cout<<endl<<"Entered no is amrstrong ";
}
else
{
    cout<<endl<<"Entered no is not armstrong";
}
cout<<endl<<arm<<endl;
return 0;
}