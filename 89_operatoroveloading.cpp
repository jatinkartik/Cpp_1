#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    int b;
    public:
    A(int a=0,int b=0){
        this->a=a ;
        this->b=b ;
    }
    void getdata(){
        cout<<endl<<" the value of a : -  "<<a;
        cout<<endl<<" the value of b : -  "<<b;
    }
A operator+(A const &obj){
    A s;
    s.a = a + obj.a;
    s.b = b + obj.b;
    return s;
}
};
int main(){
    A d(88,98);
    A k(22,32);
    A f = d+k;
    f.getdata();
cout<<endl;
return 0;
}