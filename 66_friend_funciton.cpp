#include <iostream>
#include <stdlib.h>
using namespace std;
class complexno
{
private:
    int n1;
    int n2;
    friend complexno addfunc(complexno t1, complexno t2);

public:
    void setdata(int n, int m);
    void getdata();
};

void complexno::setdata(int n, int m)
{
    n1 = n;
    n2 = m;
}
void complexno::getdata()
{
    cout << "The no is " << n1 << " + " << n2 << "i" << endl;
}

complexno addfunc(complexno t1, complexno t2)
{
    complexno hh;
    hh.setdata((t1.n1 + t2.n1), (t1.n2 + t2.n2));
    return hh;
}

int main()
{
    complexno nn, mm, sum;
    nn.setdata(5, 9);
    nn.getdata();
    mm.setdata(9, 4);
    mm.getdata();
    sum = addfunc(nn, mm);
    sum.getdata();
    cout << endl;
    return 0;
}