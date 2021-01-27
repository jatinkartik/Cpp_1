#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n;
cout<<"Enter the value of n";
cin>>n;

for(int i =1; i <= n; i++){
    for(int r =n-1;r>=i;r--){
        cout<<"  ";
    }
    for(int k =i; k > 1; k--){
    cout<<"* ";
    }
for(int j =1; j <= i; j++){
    cout<<"* ";
    }
    cout<<endl;
}
for(int i = 1; i < n; i++){
    for(int r =1;r <= i;r++){
        cout<<"  ";
    }
    for(int k = n; k > i; k--){
    cout<<"* "; 
 }
for(int j = n-i; j >1; j--){
    cout<<"* ";
    }
    cout<<endl;
}
return 0;
}