#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<string.h>
using namespace std;

int main(){
int n;
bool flag = 1;
cout<<"Enter the number :";
cin>>n;
for( int i = 2; i <= sqrt(n); i++){
    if(n%i == 0){
    flag = 0;
    cout<<endl<<"your number is not prime";
    break;
    }
}
if(flag == 1){
    cout<<endl<<"your number is prime";
}
return 0;
}