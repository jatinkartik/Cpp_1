#include <iostream> 
#include<fstream> 
using namespace std;  
void func(int &);  
int main()  
{  ofstream ok("sample.txt");
if(ok.is_open()){
    cout<<"i am now writing to file ";
    ok<<"aur bhai tu teek hai na";
}
   int a=10;  
   std::cout <<"Value of 'a' is :" <<a<< std::endl;  
  func(a);   
  std::cout << "Now value of 'a' is :" <<a<< std::endl;  
  return 0;  
}  
void func(int &m)  
{  
   m=8;  
}