#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string>
using namespace std;
class worker
{
    int workercont;
    int workername;
    //  friend strcat(worker a, worker b);

public:
    friend worker sumofob(worker a, worker b);
    void setdata(int a, int b)
    {
        workername = a;
        workercont = b;
    }
    void ouput()
    {
        cout << endl
             << "the worker name is " << workername;
        cout << endl
             << "the worker contact no  is " << workercont;
    }
    void sum( int a , int b)
    {
        // worker w3;
        cout << endl
             << "the sum of name length is " << a;
        cout << endl
             << "the sum of contact no is  " << b;
        workername = a;
        workercont  = b;
    }
};

worker sumofob(worker w1, worker w2){
    worker t1;
    t1.setdata((w1.workname+w2.workername),(w1.workconst+w2.workname));
 
    // sum = strcat(w1.workername,w2.workername);
    // nosum = w1.workercont + w2.workercont;
    return t1;
}
int main(){
    worker w1, w2, w3;
 
    int phone_no = 4,s = 9;
    // cout << "Enter the name_no of the worker : - ";
    // cin>>s;
    // cout << "Enter the phone no of the worker : -";
    // cin >> phone_no;
    // fflush(stdin);
    // cin.getline(name,30); - -- > for character array bcz we have to give the size of the array
    w1.setdata(s, phone_no);
    w1.ouput();
    w2.setdata(s, phone_no);
    w2.ouput();
    w3 = sumofob(w1, w2);
    w3.ouput();
    cout << endl;
    return 0;
}