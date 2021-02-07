#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void fibseries(int n1, int n2, int n);

int main(){
int no;
int n01,n02;
cout<<"Enter the value of n01 and n02 :";
cin>>n01>>n02;
cout<<"Enter the value of no : ";
cin>>no;
fibseries(n01,n02,no);
return 0;
}
void fibseries(int n1, int n2, int n){

int sum;
for(int i = 1; i<n; i++){
    sum = n1 + n2;
    cout<<sum<<"\t";
    n1 = n2;
    n2 = sum;
    
}
}