#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int fact(int num);
int main(){
int number;
cout<<"Enter the value of n :";
cin>>number;
int combination;
for(int i = 0; i < number ; i++){
    for(int j = 0; j <= i; j++){
         combination = fact(i)/(fact(i-j)*fact(j));
        cout<<"     "<<((((((((((((((((((((((((((((((((((((((((((((combination))))))))))))))))))))))))))))))))))))))))))));
    }
    cout<<endl;
}
}
int fact(int num){

int factorial = num;
if(num == 1 || num == 0){
    return 1;
}
return num * fact(num -1);
}