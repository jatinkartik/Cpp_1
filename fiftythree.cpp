#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

struct students{
    int rollno;
    string clas;
    string name;
    char group;
};
union identity{
    long long int aadhar,drivinglicense;
    char pancard[20];
};


int main(){
    string firstn,middlen,lastn;
    cin>>firstn;
    cin>>middlen;
    cin>>lastn;
    enum nameseq{first,middle,last};
    cout<<first<<endl;
    cout<<middle<<endl;
    cout<<last<<endl;
    // students block1_1;
    // identity cusumer1;
    // cout<<"Enter the Roll no of the students   :";
    // cin>>block1_1.rollno;
    // cout<<"Enter the Class  of the students   :";
    // cin>>block1_1.clas;
    // cout<<"Enter the Name of the students   :";
    // cin>>block1_1.name;
    // cout<<"Enter the Group of the students   :";
    // cin>>block1_1.group;
    // cout<<"student database"<<endl;
    // cout<<setw(9)<<block1_1.clas<<endl;
    // cout<<setw(9)<<block1_1.rollno<<endl;
    // cout<<setw(9)<<block1_1.group<<endl;
    // cout<<setw(9)<<block1_1.name<<endl;
    identity emp1;
    emp1.aadhar = 888888888888889;
    emp1.drivinglicense = 93333332213;
    cout<<"Enter the pancard no of emp1";
    cin>>emp1.pancard;
    cout<<setw(20)<<emp1.drivinglicense<<endl;
    cout<<setw(20)<<emp1.aadhar<<endl;
    cout<<setw(20)<<emp1.pancard<<endl;
cout<<endl;
return 0; 
}