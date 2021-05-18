#include <bits/stdc++.h>
using namespace std;
class student
{
    int a;
    float b;

public:
    student setdata(int a, float b)
    {
        this->a = a;
        this->b = b;
        return *this;
    }
    void getdata()
    {
        cout << endl
             << "the value of a is : - " << a;
        cout << endl
             << "the value of b is : - " << b;
    }
};
int main()
{
student a;
student *b;
b =&a;
// b->setdata(44,22.1).getdata();
b->setdata(44,22.1);
b->getdata();
    cout << endl;
    return 0;
}