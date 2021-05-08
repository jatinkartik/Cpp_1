#include<bits/stdc++.h>
using namespace std;
union identity{
    int aadhaar;
    int bank;
    float pan;
    double vid;
};
int main(){
  identity v1;
//   v1 =(identity *)malloc(sizeof(union identity));
// v1->aadhaar = 999;
// cout<<v1->aadhaar;
v1.aadhaar = 999;
cout<<v1.aadhaar;
cout<<endl;
return 0;
}