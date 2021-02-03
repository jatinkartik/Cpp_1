#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n;
int t = 1,j =0;
cout<<"Enter the number:"<<endl;
cin>>n;
while(n>=t){
    if(n%t==0){ 
        j++;
    }
t++;
}
if(j==2){
    cout<<endl<<"the number is prime";
}
else{
    cout<<endl<<"the number is not prime";
}
return 0;
}