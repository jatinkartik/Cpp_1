#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int number;
cout<<"Enter the size of array : - ";
cin>>number;
int *ptr = (int) *  malloc(number*sizeof(int));
int num;
cout<<"Enter the char for switch statement: - /n  1 : - for print the current array /n 2 : for add element to beggining of array /n 3 : - delete the specific element /n 4:- add element to specific position";
cin>>num;
switch(num){
    case 1:
    for(int i = 0; i<number; i++){
        cout<<endl<<ptr[i];
    }
    case 2: 
    number++;
    int element1; 
    cout<<"Enter the element : - ";
    cin>>element1;
    for(int j = 0;j<number; i++)
}


int * array_int(int *ptr){
    for(int i = 0;i< 10;i++){
        cout<<"Enter the value of array"<<i<<" : - ";
        cin>>array[i];
    }
    for(int j = 0;j< 10;j++){
        cout<<"value of array"<<j<<" : - "<<array[j]<<"at address"<<&array[j]<<endl;
    }

    int  * changeval(array[]){
        
    }
    return 0;
}

cout<<endl;
return 0;
}