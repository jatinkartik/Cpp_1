// this code is for binary to decimal conversion
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
    int bin;
    int sum = 0,i,j;
    int arr[88];
    cout<<"Enter the binary value :";
    cin>>bin;
    
    for(i = 0; bin > 0; i++){
        arr[i] = bin%10;
        if(arr[i] > 1){
            cout<<endl<<"invalid number"<<endl;
            return 0;
        }
        bin /= 10;
    }
    for(j = i -1; j >=0; j--){
        sum += arr[j] * pow(2,j);
    }
    cout<<endl<<sum;
return 0;
}