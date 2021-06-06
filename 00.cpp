#include<bits/stdc++.h>
using namespace std;
class base{
   public: 
   virtual string print(){
      return "THis is base class";
   }
};
class derived : public base{
   public:
   virtual string print(){
      return "this is derived class";
   }
};
void describe (base b){
   cout<<b.print()<<endl;
};
int main(){
   base b;
   derived d;
   describe(b);
   describe(d);
cout<<endl;
return 0;
}