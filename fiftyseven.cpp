#include<iostream>
#include<stdlib.h>
using namespace std;
 class employee{
    //  void get(int m,int n,char o );
     public: 
     string name;
     int code;
     private:
     int password;
     int areacode;
     char block;

    public:
    //  void display();
     void get(int m,int n,char o ){
         m = password;
         n = areacode;
         o = block;
     }
     void display(){
         cout<<"the password of employee is "<<password<<endl;
         cout<<"the area codeo of the employee is "<<areacode<<endl;
         cout<<"the block in which employee work is "<<block<<endl;
     }
 };
int main(){
    int password,areacode,code;
    char o = 'j';
    employee e1;

    cout<<"Enter the the areacode of the employee: -  ";
    cin>>areacode;
    cout<<"Enter the code of the employee : -  ";
    cin>>code;
    cout<<"Enter the password of the employee : - ";
    cin>>password;
    e1.code = code;
    e1.get(password,areacode,o);
    e1.display();
    
cout<<endl;
return 0;
}