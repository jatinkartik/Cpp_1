#include<iostream>
#include<stdlib.h>
using namespace std;
class employee
{
private:
    int no;
    int no1;
public:
    employee(int real = 0,int img = 0) {
       no = real;
       no1 = img;
    }
    employee operator +(employee const &obj){
        employee t1;
        t1.no  = no  + obj.no;
        t1.no1  = no1 + obj.no1;
        return t1;
    }
    void display(){
        cout<<endl<<no<<"  + i"<<no1<<endl;
    }
};
int main(){
    employee n1(12,14),n2(13,15);
    employee n3 = n2+ n1;
    n3.display();
cout<<endl;
return 0;
}