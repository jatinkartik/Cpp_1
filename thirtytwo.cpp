#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void primefunc(int n1,int n2);
int main(){
int no1,no2;
cout<<"Enter two number :";

cin>>no1>>no2;
primefunc(no1,no2);
return 0;
}
void primefunc(int n1,int n2){

for (int i = n1; i <= n2; i++)
{
    int c = 0;
for(int j = 1; j <= i; j++){
    if(i%j==0){
        c++;
    }

}
if(c==2){
    cout<<i<<"\t";
}
}
}