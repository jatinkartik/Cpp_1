// 
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
for(int j=1;j<=i;j++){


    if((j+i)%2==0){
        cout<<"0"<<"\t";
    }
    else
    {
     cout<<"1"<<"\t";
    }
    
}
k--;

cout<<endl;
}
return 0;
}