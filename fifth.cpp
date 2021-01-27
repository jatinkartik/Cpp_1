#include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
using namespace std;

int main(){
 int saving;
 cout<<"enter the value of amount "<< endl;
  cin>>saving;
  if(saving>5000){
      if(saving>10000){
          cout<<"roadtrip        ";
      }
      else
      {
          cout<<"only party       ";
      }
      cout<<"i will be go with neha"<< endl;

  }
  else if(saving>2000)
  {
      cout<<"i will be go with vasundhra"<< endl;

  }
  else
  {
      cout<<"budget to go with girlfriend"<<endl;
  }
return 0;
}