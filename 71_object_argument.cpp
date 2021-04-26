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
    // string name;
    friend student add(student i, student j);

public:
    student(int i = 0, int j = 0)
    {
        rollno = i;
        srno = j;
        // name = k;
        
    }
    void getdata(){
        cout<<endl<<"the value of rollno is :"<<rollno;
        cout<<endl<<"the value of srno is :"<<srno;
    }
}jkt;
student add(student i, student j)
{
    student h;
    h.rollno = i.rollno + j.rollno;
    h.srno = i.srno + j.srno;
    // h.name = string * strcat(string i.name,string j.name);
    return h;
}
int main()
{
    student t(99,33);
    student r(32,24);
    student jkt;
    jkt = add(t,r);
    t.getdata();
    r.getdata();
    jkt.getdata();
    cout << endl;
    
    return 0;
}