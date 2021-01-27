#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n;
char name[99];
cout<<"Enter your name"<<endl;
cin>>name;
 printf("\n ");

cout<<"enter the no of time you want to print your name ";
cin>>n;

//  for(int i = 0; i < n ; i++)
int i = 0; while(i<n){
     cout<<name<< endl;
i++;
 }
return 0;
}