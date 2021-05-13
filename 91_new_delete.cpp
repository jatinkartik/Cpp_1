#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3;
    int *ptr;
    int **ptrr;
    ptrr = &ptr;
    ptr = &a;
    cout << endl
         << "the address of variable a is : - " << ptr;
    cout << endl
         << "the address of variable ptr is : - " << ptrr;
    cout << endl
         << "the address of value of  a is : - " << *ptr;
    cout << endl
         << "the address of value of  a is : - " << **ptrr;
    cout << endl;
    return 0;
}