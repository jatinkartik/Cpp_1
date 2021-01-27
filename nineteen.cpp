#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n;
int z =1,z1 =1;;

cin>>n;
for(int i =1; i<= n/2; i++){
    for(int j=1; j <=n; j++){

        if(j <= z|| j > (n-z)){
            printf("*");

        }
        else{

        printf(" ");
        }
    }
    z++;
    printf("\n");
}
for(int i =1; i<= n/2; i++){
    for(int j=1; j <=n; j++){

        if(j <= z1|| j > (n-z1)){
            printf(" ");

        }
        else{

        printf("*");
        }
       

        // if(j>i){
        // printf("*");
        // }
        // else{
        //     printf("0");
        // }
    }
    z1++;
    printf("\n");
}
 
return 0;
}
