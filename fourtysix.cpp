
// this code is for decimal to hexadecimal conversion
// #include<iostream>
#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;
void decimaltohex(int n);
int main(){
  int n;
  cin>>n;
  decimaltohex(n);
return 0;
}
void decimaltohex(int n){
    int u =0;
  char v[44];
    while(n>0){
       if(n%16==0){
           v[u] = '0';
       }
       if(n%16==1){
           v[u] = '1';
       }
       if(n%16==2){
           v[u] = '2';
       }
       if(n%16==3){
           v[u] ='3';
       }
       if(n%16==4){
           v[u] = '4';
       }
       if(n%16==5){
           v[u] = '5';
       }
       if(n%16==6){
           v[u] = '6';
       }
       if(n%16==7){
           v[u] = '7';
       }
       if(n%16==8){
           v[u] = '8';
       }
       if(n%16==9){
           v[u] = '9';
       }
       if(n%16==10){
           v[u] = 'A';
       }
       if(n%16==11){
           v[u] = 'B';
       }
       if(n%16==12){
           v[u] = 'C';
       }
       if(n%16==13){
           v[u] = 'D';
       }
       if(n%16==14){
           v[u] = 'E';
       }
       if(n%16==15){
           v[u] = 'F';
       }
        n /= 16;
       u++;
    }
    for(int j = u-1;j>=0;j--){
        cout<<v[j];
    }
}