#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n;
int z =1;
cout<<"Enter the value of n :";
cin>>n;
for(int i =1; i<= n/2; i++){
    for(int j=1; j <=n; j++){

        if(j < z+1|| j > (n-z)){
            printf("*");

        }
        else{

        printf(" ");
        }
    }
    z++;
    printf("\n");
}
//z--; if we use this we find single line on reverse loop instead of double line 
for(int i =1; i<= n/2; i++){
    for(int j=n; j >=1; --j){

        if(j < z|| j > (n-z)+1){
            printf("*");

        }
        else{

        printf(" ");
        }
   
    }
    z--;
    printf("\n");
}
 
return 0;
}
