// this pointer is used to priorty to non local variable of same name to use in the function
#include <bits/stdc++.h>
using namespace std;
class student
{
    int a;
    int b;

public:
    student(int a, int b)
    {
        this->b = b;
        this->a = a;
        // a =a;
        // b =b;
    }
    void getdat()
    {
        cout << "the value of a and b is : -  " << a << "  " << b;
    }
};
int main()
{
    student s(55, 22);
    s.getdat();
    cout << endl;
    return 0;
}