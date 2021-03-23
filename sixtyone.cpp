#include <iostream>
#include <stdlib.h>
using namespace std;
class students
{
private:
    int block;
    int room;
    string stream;
    static int srno;

public:
    void getdata(void);
    static void srincr();
    void showdata();
    // ~students();
};

void students::getdata(void)
{
    cout << endl
         << "Enter the number of block : - ";
    cin >> block;
    cout << endl
         << "Enter the number of room : - ";
    cin >> room;
    // srno++;
}
void students::showdata()
{
    getdata();
    cout << "the block of the student is " << block;
    cout << endl
         << "the room of the student is  " << room;
}
void students::srincr()
{
    // srno = 1000;
    cout << endl
         << "the current srno is " << srno;
    srno++;
}

int students::srno = 100;

int main()
{
    //   students::srincr();
    students t1[5];
    t1[0].showdata();
    students::srincr();
    t1[1].showdata();
    students::srincr();
    t1[2].showdata();
    students::srincr();
    t1[3].showdata();
    students::srincr();
    // t1.getdata();
    // t1.srincr();
    // t2.getdata();
    // // t2.getdata();
    // t2.srincr();
    // t3.getdata();
    // // t3.getdata();
    // t3.srincr();
    cout << endl;
    return 0;
}