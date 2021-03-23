#include<iostream>
#include<stdlib.h>
using namespace std;
class employee
{
private:
    int id;
    int salery;
public:
    static int countt;
    void employe(void);
    void show();
    static void count();
};

void employee::employe(void)
{
    cout<<"Enter the value of the is id  "<<endl;
    cin>>id;
    cout<<"Enter the value of the is salery  "<<endl;
    cin>>salery;
    countt++;
}
void employee::show(){
    cout<<"the value of salery is "<<salery;
    cout<<endl<<"the value of id is "<<id;
}
void employee::count(){
    cout<<endl<<"The value of count is "<<countt<<endl;
}
int employee::countt = 100;
int main(){
    
    employee t1,t2;
    t1.employe();
    t1.show();
    employee::count();
    t2.employe();
    t2.show();
    employee::count();
cout<<endl;
return 0;
}