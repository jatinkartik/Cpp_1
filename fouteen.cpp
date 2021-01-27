#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int row,col;

cout<<"Enter the value of row and column :"<<endl;
cin>>row>>col;

for(int i = 1; i <=row; i++){
    for(int j = 1; j <=col; j++){
        cout<<"*";
    }
    cout<<endl;
    --col;
}
return 0;
}