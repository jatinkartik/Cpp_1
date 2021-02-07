#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int addnum(int n);
int main(){
    int number;
    cout<<"Enter the value of n :";
    cin>>number;
    cout<<endl<<addnum(number);
return 0;
}
int addnum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}