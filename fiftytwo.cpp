#include<iostream>
#include<stdlib.h>
using namespace std;
class fiftytwo
{
private:
    /* data */
    int jatin,kartik;
public:
    int mani,tyagi;
    void privatedata(int no1,int no2);
    void printdata();
};

void fiftytwo :: privatedata(int no1,int no2)
{
cout<<"Enter the value of no1 variable";
cin>>no1;
jatin = no1;
cout<<"Enter the value of no2 variable";
cin>>no2;
kartik = no2;
}

void fiftytwo::printdata()
{
    cout<<"the value is"<<jatin;
    cout<<"the value is"<<kartik;
    cout<<"the value is"<<mani;
    cout<<"the value is"<<tyagi;
}

int main(){
    fiftytwo first;
    first.tyagi =99;
    first.mani = 88;
    first.privatedata(88,00);
    cout<<"this answer via jatin kartik"<<first.tyagi;
    cout<<"this answer via jatin kartik"<<first.mani;
    
cout<<endl;
return 0;
}