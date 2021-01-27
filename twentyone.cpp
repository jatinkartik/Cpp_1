#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n,k;
cout<<"Enter the value of n :";
cin>>n;
k = n;
for(int i=1;i<=n;i++){
int h =1;
for(int j=k;j>=1;j--){
    cout<<h<<"\t";
    h++;
    
}
k--;

cout<<endl;
}
return 0;
}