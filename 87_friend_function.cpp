// A friend function cannot access the private and protected data
// members of the class directly. It needs to make use of a class
//  object and then access the members using the dot operator

#include <bits/stdc++.h>
using namespace std;
class employee
{
    int srno;
    string name;
    friend void setdata(employee s);

public:
    employee(int srno, string name)
    {
        this->srno = srno;
        this->name = name;
    }
    void getdata()
    {
        cout << endl
             << "the value of srno is  : -   " << srno;
        cout << endl
             << "the value of name is  : -   " << name;
    }
};
void setdata(employee s)
{
    cout << endl
         << "the value srno is : -" << s.srno;
    cout << endl
         << "the value name is : -" << s.name;
    int leng = s.name.length();
    cout << endl
         << "the multiplication of name length and srno is : -- " << leng * s.srno;
}
int main()
{
    employee str(5, "ismai");
    setdata(str);
    cout << endl;
    return 0;
}