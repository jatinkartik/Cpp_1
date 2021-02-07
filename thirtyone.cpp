#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 int fact(int num);
int main(){
int n1,n2;
cout<<"Enter two number :";
cin>>n1>>n2;
cout<<endl<<fact(n1)<<endl<<fact(n2)<<ends;
return 0;
}
int fact(int num){
int gram=1;
for(int i = 1; i <= num; i++){
    gram  *= i;
}

return gram;
}