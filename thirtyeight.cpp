// #include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool pyth(int x, int y, int z);
int main(){
    
    int x,y,z;
    cout<<"Enter the value of x ,y and z :"<<endl;
    cin>>x>>y>>z;
    
cout<<endl<<pyth(x,y,z);
if(pyth(x,y,z)==1){
cout<<endl<<"Given combination of no is pythagorus triplet :";

}
else{
cout<<endl<<"Given combination of no is not a pythagorus triplet :";
}

return 0;
}
bool pyth(int x, int y, int z){
     int a,b,c;
    if(x>y&&x>z){
        a = x;
        b = y;
        c = z;
    }
    else{
        if(y>z){
            a = y;
            b = x;
            c = z;
        }
        else{
            a = z;
            b = y;
            c = x;
        }
    }
    if(a*a == b*b + c*c){
        return 1;
    }
    else{
        return 0;
    }
}