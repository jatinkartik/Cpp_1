#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int pyth(int x, int y, int z);
int main(){
    
    int x,y,z;
    cin>>x>>y>>z;
 prinft(" the value of %d",pyth(x,y,z);
return 0;
}
int pyth(int x, int y, int z){
     int a,b,c;
    a = max(x,max(y,z));
    if(a==x){
        b = y;
        c = z;
    }
    else{
        if(a==y){
            b = x;
            c = z;
        }
        else{
            b = y;
            c = x;
        }
    }
    if(a*a == b*b + c*c){
        cout<<"pytha";
    }
    else{
        cout<<"pyth";
    }
}