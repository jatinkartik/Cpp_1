#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n,k;
cout<<"Enter the value of n:";
cin>>n;
k = n;
int o = 1;
for(int i = 1; i <=n; i++){
    for(int j = 1; j< k; j++){
    cout<<" ";
    }
    for(int l = 1; l <= o; l++){
        if(l==1||l==o){

    cout<<"* ";
}
else
{
    cout<<"  ";
}
    }
    for(int j = 1; j< k; j++){
    cout<<" ";
    }
    for(int j = 1; j< k; j++){
    cout<<" ";
    }
    for(int l = 1; l <= o; l++){
if(l==1||l==o){

    cout<<"* ";
}
else
{
    cout<<"  ";
}
    }

    cout<<endl;
    k--;
    o++;
}
printf("\n hello bro this file is printed by jatin kartik tyagi are you sure that person is so much talented realy");
printf("jatin kartik tyagi is \n always great you know");

return 0;
}