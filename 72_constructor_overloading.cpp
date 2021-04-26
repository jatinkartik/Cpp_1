#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int rollno;
    int srno;
    string name;
    // friend student add(student i, student j);

public:
    student()
    {
        rollno = 0;
        srno = 0;
        // name = k;
    }
    // student()
    // {
    //     rollno = 0;
    //     srno = 0;
    //     // name = k;
    // }

    student(int i, int j)
    {
        rollno = i;
        srno = j;
        // name = k;
    }
    student(int i, int j, string k)
    {
        rollno = i;
        srno = j;
        name = k;
    }
    void getdata()
    {
        cout << endl
             << "the value of rollno is :" << rollno;
        cout << endl
             << "the value of srno is :" << srno;
        cout << endl
             << "the value of name is :" << name;
    }
} jkt;

int main()
{
    student t(99, 33);
    student r(32, 24, "jatin_kartik_tyagi");
    student jkt;
    // jkt = add(t, r);
    t.getdata();
    r.getdata();
    jkt.getdata();
    cout << endl;
    return 0;
}