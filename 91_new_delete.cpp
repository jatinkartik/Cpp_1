#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3;
    // int *ptr;
    // int * ptr;
    int *ptr = new int(88);
    delete[] ptr;
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
    a = 87;
    cout<<endl<<"yaha se aabb";
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