#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class kbinary
{
private:
    string num;

public:
    void binaryread()
    {
        cout << "Enter the binary no : -- ";
        cin >> num;
    }
    void checkbinary();
    void ones();
    void ouput();
    //  ~checkbinary();
};
void kbinary::ones()
{ 
    binaryread();
    checkbinary();
    for (int j = 0; j < num.length(); j++)
    {
        /* code */
        if (num.at(j) == '1')
        {
            num.at(j) = '0';
        }
        else
        {
            num.at(j) = '1';
        }
    }
}
void kbinary::checkbinary()
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << endl
                 << "invalid binary entry";
            exit(0);
        }
    }
    cout << "entered no is binary";
}
void kbinary::ouput()
{
    cout << endl
         << "the ones compliment is " << num;
}
//  checkbinary::~checkbinary()
//  {
//  }

int main()
{
    kbinary t1;
    // string ni;
    // cout << "Enter the string";
    // cin >> ni;
    // cout << ni.length();
    // cout << endl
    //      << ni.at(2);
    // -- the content above commented is for test function .lenth() and .at(i)
    // t1.binaryread();
    // t1.checkbinary();
    t1.ones();
    t1.ouput();
    cout << endl;
    return 0;
}