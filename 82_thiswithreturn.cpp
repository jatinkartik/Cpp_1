#include<bits/stdc++.h>
using namespace std;
class employee{
    int code;
    string name;
    public :
    employee func(int a,string nn){
        name = nn;
        code = a;
        return *this;
    }
    void getdata(){
        cout<<"the value of code and name is : -- "<<code<<"  "<<name;

    }
};
int main(){
    employee bb;
    bb.func(88,"kusum").getdata();
cout<<endl;
return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// struct employe{
//     int a;
//     int b;
//     string name;
// };
// int main(){
//     employe  *bbb;
// bbb = (employe *)malloc(sizeof(employe));
// bbb->name= "jitendra";
// cout<<bbb->name;
// cout<<endl;
// return 0;
// }