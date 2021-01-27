#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int pocketmoney = 3000;
 

for( int i = 1; i <=30; i++){
    if(pocketmoney<=0){
        break;
    }
    if(i%2==0){
        cout<<"you are not allowed to go out today"<<endl;
    }
    else
{
    cout <<"you can go out"<<endl;
pocketmoney-=300;
}
}
return 0;
}