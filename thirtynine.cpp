// this code is for decimal to binary conversion 
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int dec;
    int arr[88],i;
    int remainder =0,quot;
    cout<<"Enter the decimal value :";
    cin>>dec;
    for( i = 0; dec > 0; i++){
        //remainder *= 10;
    remainder = dec%2;
    arr[i] = remainder;
    dec = dec/2;
    }
    for (int j = i -1; j >= 0; j--)
    {
        cout<<arr[j];
    }
    
    // cout<<endl<<remainder<<endl;
return 0;
}