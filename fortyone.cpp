// decimal to octal conversion
// #include<iostream>
#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;

int main(){
  int dec;
  int arr[12],i,remainder;
  cout<<"Enter the value of decimal number:";
  cin>>dec;
  for(i = 0; dec>0; i++){
    remainder = dec%8;
    arr[i] = remainder;
    dec = dec/8;      
  }
  cout<<endl;
  for(int j = i -1; j>=0; j--){
    cout<<arr[j];
  }
return 0;
}