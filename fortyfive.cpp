// this code is for hexadecimal to decimal conversion

// #include<iostream>
#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;
int hexadecimaltodecimal(string n);
int main(){
  string nn;
  cin>>nn;
  cout<<hexadecimaltodecimal(nn);
return 0;
}
int hexadecimaltodecimal(string n){
    int x = 0;
    int y = 1;
    int v;
  int size = n.size();

    for(int k = size -1; k >= 0; k--){
      if(n[k] >= '0' && n[k] <= '9'){
        v = n[k] - '0';
      }
      if(n[k] >= 'A' && n[k] <= 'F'){
        v = n[k] - 'A' + 10;
      }
        x += v*y;
        y *= 16;
    }
    return x;
}