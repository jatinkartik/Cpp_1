// this code is for decimal to hexadecimal conversion
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
     int dec;
    char arr[88];
    int i,j;
    int remainder = 0;
    cout<<"Enter the decimal  value:";
    cin>>dec;
    for( i = 0; dec > 0; i++){
    remainder = dec%16;
    if(remainder == 10){
        arr[i] = 'A';
        }
        else
        if(remainder == 11){
        arr[i] = 'B';
        }
        else
        if(remainder == 12){
        arr[i] = 'C';
        }
        else
        if(remainder == 13){
        arr[i] = 'D';
        }
        else
        if(remainder == 14){
        arr[i] = 'E';
        }
        else
        if(remainder == 15){
        arr[i] = 'F';
        }
        else
        if(remainder == 0){
        arr[i] = 48;
        }
        if(remainder == 1){
        arr[i] = 49;
        }
        if(remainder == 2){
        arr[i] = 50;
        }
        if(remainder == 3){
        arr[i] = 51;
        }
        if(remainder == 4){
        arr[i] = 52;
        }
        if(remainder == 5){
        arr[i] = 53;
        }
        if(remainder == 6){
        arr[i] = 54;
        }
        if(remainder == 7){
        arr[i] = 55;
        }
        if(remainder == 8){
        arr[i] = 56;
        }
        if(remainder == 9){
        arr[i] = 57;
        }
        
    dec = dec/16;
    }
    cout<<endl;
   for( j=i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
    
    
return 0;
}