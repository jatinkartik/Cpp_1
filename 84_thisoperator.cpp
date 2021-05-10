#include <bits/stdc++.h>
using namespace std;
class employee
{
private:
    int a;

public:
    employee &setdata(int a)
    {
        this->a = a;
        return *this;
    }
    void showdata()
    {
        cout << endl
             << "the value of a is : -   " << a;
    }
};
int main()
{
employee ss;
ss.setdata(77).showdata();
    cout << endl;
    return 0;
}