#include<bits/stdc++.h>
using namespace std;
class employe{
    int srno;
    string name;
    public :
     virtual employe & setdata(int srn,string nam){
srno = srn;
name = nam;
return *this;
    }
    virtual void getdata(){
        cout<<" 1 is "<<srno<<"   "<<name;
    }
};
class employee : public employe{
    int srno;
    string name;
    public :
    employee & setdata(int srn,string nam){
srno = srn;
name = nam;
return *this;
    }
    void getdata(){
        cout<<" 2 is "<<srno<<"   "<<name;
    }
};

int main(){
    employe * main;
    employe j;
    employee k;
    main = &k;
    main->setdata(88,"sweta");
    main->getdata();
cout<<endl;
return 0;
}