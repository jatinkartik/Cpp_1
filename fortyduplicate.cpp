#include<bits/stdc++.h>
using namespace std;
int octaltodecimal(int n);
int main(){
    int n;
    cin>>n;
    cout<<octaltodecimal(n);
return 0;
}
int octaltodecimal(int n){
    int x = 0; 
    int y = 1;
    while(n>0){
        int v = n%10;
        x += y*v;
        y *= 8;
        n /= 10;
    }
    return x;
}