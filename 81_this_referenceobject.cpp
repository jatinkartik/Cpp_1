#include<bits/stdc++.h>
using namespace std;
class student{
    int a ;
    int b;
    public:
    student & setdata(int a, int b){
        this->a = a;
        this->b = b;
        return *this;
    }
    void getdata(){
        cout<<"the value of a and b is : -  "<< a<<"  "<<b;
    }
};
int main(){
   student abc;
   abc.setdata(55,56).getdata();
cout<<endl;
return 0;
}