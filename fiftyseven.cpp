#include<bits/stdc++.h>
using namespace std;
 class employee{
     public: 
     string name;
     int code;
     private:
     int password;
     int areacode;
     char block;

     void get(int m,int n,char o);

     void display();
 };
int main(){
    int password,areacode;
    
cout<<endl;
return 0;
}
     void employee::get(int m,int n,char o){
         m = password;
         n = areacode;
         o = block;
     }
     void employee::display(){
         cout<<"the password of employee is "<<password;
         cout<<"the area codeo of the employee is "<<areacode;
         cout<<"the block in which employee work is "<<block;
     }