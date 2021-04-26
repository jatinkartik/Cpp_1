#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
class cuians{
    private:
    int uid;
    int usercode;
    string name;
    string cu_id;
    public:
    void setdata(int uid_,int userid_,string name_ , string cu_id_){
        uid = uid_;
        usercode = userid_;
        name  = name_;
        cu_id = cu_id_;
    }
    void getdata(){
        cout<<endl<<"the cuians  name is : -"<<name;
        cout<<endl<<"the cuians  usercode is : -"<<usercode;
        cout<<endl<<"the cuians  uid is : -"<<uid;
        cout<<endl<<"the cuians  cu_id is : -"<<cu_id;
    }
};
int main(){
    cuians no1;
    no1.setdata(5005,17011903,"jatin_kartik","jatintyagi43625@gmail.com");
    no1.getdata();
cout<<endl;
return 0;
}   