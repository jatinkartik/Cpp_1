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
int h =1;
for(int j=k;j>=1;j--){
    cout<<j%2<<"\t"; //  this is because k is decrease after nested loop  check it on line 22
    cout<<h%2<<"\t";// all of have different pattern try and check it out 
    cout<<i%2<<"\t";// this is also intresting check it out || this one having same outout acroos rows because it take 
    // parent directory  value of i .^
    h++;
    
}
k--;

cout<<endl;
}
return 0;
}