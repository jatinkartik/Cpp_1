#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int rollno;
    float roomno;
    string mailid;

public:
    int srno;
    student(string name1 = "admin", int rollno1 = 00)
    {
        rollno = rollno1;
        name = name1;
    }
    student(string name1 , string mailid1,int rollno1,float roomno1)
    {
        rollno = rollno1;
        name = name1;
        roomno = roomno1;
        mailid = mailid1;
    }
    
    void getdata()
    {
        cout << "the rollno of the student is  : - " << rollno << endl;
        cout << "the mailid of the student is  : - " << mailid << endl;
        cout << "the name of the student is  : - " << name << endl;
        cout << "the srno of the student is  : - " << roomno << endl;
    }
    student operator*(student const &obj)
    {
        student ss;
        ss.mailid = mailid.append(obj.mailid);
        ss.rollno = rollno + obj.rollno;
        ss.name = name.append(obj.name);
        ss.roomno = roomno + obj.roomno;
        return ss;
    }
};
int main()
{
    student jk("jatin_kartik","jatintyagi43625",5005,11.914);
    student jt("jatin_tyagi","jatinkingtyagi555",5005,18.914);
student jkt = jk * jt;
jkt.getdata();
    cout << endl;
    return 0;
}