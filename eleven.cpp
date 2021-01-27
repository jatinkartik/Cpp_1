#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
cout<<"enter the value of n "<< endl;
int n;
cin>>n;
int i,j;
for(j = 3; j <=n; j++){
for(i=2; i < j; i++){
    if(j%i==0){
        break;
    }
}
if(i==j){
    cout<<i<<endl;
}
// else{
//     cout<<"non prime";
// }
}
return 0;
}