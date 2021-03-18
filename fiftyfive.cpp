#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int swap(int *n1,int *n2);
int main(){
    int no1,no2;
    no1 =66;
    no2 = 33;
    int *n1,*n2;
 n1 = &no1;
 n2 = &no2;
 swap(*n1,*n2);
    // printf("%d",swap(n1,n2));
cout<<endl<<no2;
cout<<endl;
return 0;
}
int swap(int *n1,int *n2){
    int * temp;
    temp = n2;
    n2 = n1;
    n1 = temp;
    cout<<*n1<<"jkt";
return *n2;
}