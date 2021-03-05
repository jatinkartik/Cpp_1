#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main(){
    const int jatin = 99;
    const int jatin1= 99556444;
    const int jatin2= 9945;
    const int jatin3= 9945;
    // jatin = 88;
    cout<<"jatin is printed from last bcz of setw option     "<<jatin<<endl;
    cout<<"jatin is printed from last bcz of setw option     "<<jatin1<<endl;
    cout<<"jatin is printed from last bcz of setw option     "<<setw(6)<<jatin2<<endl;
    cout<<"jatin is printed from last bcz of setw option     "<<setw(6)<<jatin3<<endl;
cout<<endl;
return 0;
}