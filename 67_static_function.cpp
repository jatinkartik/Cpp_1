#include <iostream>
#include <stdlib.h>
using namespace std;
// int  worker::count;
class worker
{
    // static int count;
private:
    int id;
    int no;
    
public:
    void setdataa();
    void getdataa();
};

class employee
{
private:
    int no;
    int salery;
    friend class worker;

public:
    void setdata();
    void getdata();
};
void worker::getdataa()
{
    cout << endl
         << "the value of no is " << no;
    cout << endl
         << "the value of Id is " << id;
}
void worker::setdataa()
{
    cout << endl
         << "Enter the value of no : -";
    cin >> no;
    cout << "Enter the value of id : - ";
    cin >> id;
    // count++;
}
void employee::getdata()
{
    cout << endl
         << "the value of no is " << no;
    cout << endl
         << "the value of salery is " << salery;
}
void employee::setdata()
{
    cout << endl
         << "Enter the value of no : -";
    cin >> no;
    cout << "Enter the value of salery : - ";
    cin >> salery;
}

int main()
{
    employee t1;
    worker t;
    t1.setdata();
    t1.getdata();
    t.setdataa();
    t.getdataa();
    cout << endl;
    return 0;
}


