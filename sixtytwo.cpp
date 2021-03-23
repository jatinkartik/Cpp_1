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
    for (int i = 0; i < 5; i++)
    {
        t1[i].showdata();
    }
    
    cout << endl;
    return 0;
}