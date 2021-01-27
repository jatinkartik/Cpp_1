#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int col;
cout<<"Enter the value of column :";
cin>>col;

for(int i = 1; i  <= col; i++){
    for(int j = 1; j <= i; j++){
      if(j ==1 || j==i ){

        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
    
}

for(int i = col; i  >= 1; i--){
    for(int j = 1; j <= i; j++){
        if(j ==1 || j==i ){

        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }

    cout<<endl;
    
}
return 0;
}