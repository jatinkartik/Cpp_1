#include<iostream>
#include<stdlib.h>
using namespace std;
int addno(int n,int m);
int main(){
    int firstno,secondno;
    cout<<"Enter the first no : ";
    cin>>firstno;
    cout<<"Ente the second no : ";
    cin>>secondno;
    cout<<"the sum of no 1st and 2nd is ";
    cout<<addno(firstno,secondno);
cout<<endl;
return 0;
}
int addno(int n,int m){
    int c = n+m;
    return c;
}