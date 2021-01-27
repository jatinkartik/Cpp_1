#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
    int k,l;
    cout<<"Enter the value of rows and column :";
    cin>>k>>l;
    int g = k;
for(int i = 1; i<=k; i++){
    for(int h = g; h>1; h--){
        cout<<" ";
    }
    for(int j =1; j<=l; j++){
        cout<<"* ";
    }
    g--;
    cout<<endl;
}
return 0;
}