#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no;
    cout << "enter the no : -  ";
    cin >> no;
    if (no > 0)
    {
        try
        {
            throw 88;
        }
        catch (int)
        {
            cout << "integer not allowed";
        }
    }
    if (no == 0)
    {
        try
        {
            throw 'c';
        }
        catch (char)
        {
            cout << "char not allowed";
        }
    }
    if (no < 0)
    {
        try
        {
            throw 88.0;
        }
        catch (double)
        {
            cout << "double  not allowed";
        }
    }
    cout << endl;
    return 0;
}