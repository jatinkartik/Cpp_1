// this code is for  hexadecimal to decimal conversion
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
     int hex;
    char arr[88];
    int i,j,sum=0;
    int remainder = 0;
    cout<<"Enter the hexadecimal  value:";
    gets(arr);
    int l = strlen(arr);
    int k = l;
cout<<endl<<endl<<endl<<l<<endl;


    for( i = l ;i>=0; i--){
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
        sum += remainder * pow(16,k -1);
        k--;
    }
    cout<<endl;
  cout<<"the sum is :"<<sum;
    
    
return 0;
}