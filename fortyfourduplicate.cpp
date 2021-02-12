// #include<iostream>
#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;
int binarytodecimal(int n);
int main(){
  int n;
  cin>>n;
  cout<<binarytodecimal(n);
return 0;
}
int binarytodecimal(int n){
    int x = 0;
    int y = 1;
    while(n>0){
        int v = n%10;
        x += v*y;
        y *= 2;
        n /= 10;
    }
    return x;
}