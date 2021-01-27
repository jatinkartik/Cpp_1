#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
    int row;
    cout<<"Enter the value of column :";
    cin>>row;
for(int i = 1; i <= row; i++){
    for(int j = 1; j <= i; j++){
        cout<<i<<"\t";
    

    }
    cout<<endl;
}
return 0;
}