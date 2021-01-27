#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int i=0;
int array[88];

// while(1){
//     cout<<"Enter the value"<<endl;
//     cin>>array[i];
//     cout<<"your no is "<<array[i]<<endl;
//     if(array[i]<0){
//         break;
//     }
//     i++;

// }
do{
    cout<<"Enter the value"<<endl;
    cin>>array[i];
    if(array[i]==0){
        continue;
        
    }
    cout<<"your no is "<<array[i]<<endl;
    if(array[i]<0){
        break;
    }
    i++;

}while(1);
    cout<<"your execution is finished";
return 0;
}