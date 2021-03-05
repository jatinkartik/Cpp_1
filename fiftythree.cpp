#include<iostream>
#include<stdlib.h>
using namespace std;
struct students{
    int rollno;
    string clas,name;
    char group;
};
union identity{
    int aadhar,drivinglicense;
    char pancard[20];
};


int main(){
    students block1;
    identity cusumer1;
cout<<endl;
return 0;
}