// this code is for  hexadecimal to decimal conversion
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
     int hex;
    char arr[88];
    int arrt[88];
    int i,j,sum=0;
    int remainder = 0;
    cout<<"Enter the hexadecimal  value:";
    gets(arr);
    int l = strlen(arr);
cout<<endl<<endl<<endl<<l<<endl;


    for( i = 0 ;i<l;i++){
        if(arr[i] == 65){
        remainder = 10;
        }
        else
        if(arr[i] == 66){
        remainder = 11;
        }
        else
        if(arr[i] == 67){
        remainder = 12;
        }
        else
        if(arr[i] == 68){
        remainder = 13;
        }
        else
        if(arr[i] == 69){
        remainder = 14;
        }
        else
        if(arr[i] == 70){
        remainder = 15;
        }
        else
        if(arr[i] == 48){
        remainder = 0;
        }
        else
        if(arr[i] == 49){
        remainder = 1;
        }
         else
        if(arr[i] == 50){
        remainder = 2;
        }
         else
        if(arr[i] == 51){
        remainder = 3;
        }
         else
        if(arr[i] == 52){
        remainder = 4;
        }
         else
        if(arr[i] == 53){
        remainder = 5;
        }
         else
        if(arr[i] == 54){
        remainder = 6;
        }
         else
        if(arr[i] == 55){
        remainder = 7;
        }
         else
        if(arr[i] == 56){
        remainder = 8;
        }
         else
        if(arr[i] == 57){
        remainder = 9;
        }
        arrt[i] = remainder;
    }
    int k = 0;
    for(j = i -1; j>=0; j--){
        sum += arrt[j] * pow(16,k);
        k++;
    }
  cout<<"the sum is :"<<sum;
    cout<<endl;
    
    
return 0;
}