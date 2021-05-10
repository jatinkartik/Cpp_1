#include <bits/stdc++.h>
using namespace std;
class student
{
    int rollno;
    string name;

public:
    student &sedata(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
        return *this;
    }
    void getdata()
    {
        cout << "rollno : -  " << rollno;
        cout << endl
             << "name : -  " << name;
    }
};
int main()
{
    student ss;
    ss.sedata(5005, "jatin_kartik").getdata();
    cout << endl;
    return 0;
}