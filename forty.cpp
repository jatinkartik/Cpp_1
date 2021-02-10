// this code is for octal to decimal conversion
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
    int oct;
    int arr[88],i,sum = 0,j;
    int remainder = 0,quot;
    cout<<"Enter the octal  value:";
    cin>>oct;
    for( i = 0; oct > 0; i++){
    remainder = oct%10;
    arr[i] = remainder;
    oct = oct/10;
    }
   for( j=0; j<i; j++)
    {
        sum += arr[j]* pow(8,j);
    }
    
   cout<<endl<<sum<<endl;
    
return 0;
}