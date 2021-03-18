#include<iostream>
#include<stdlib.h>
using namespace std;
class students{
    private:
    int marks;
    int uniqueid;
    public:
    int rollno = 5005;
    string name = "jatin_kartik";
    void get(int n, int m){
        marks = n;
        uniqueid = m;
    }

    void put(){
        cout<<marks<<endl;
        cout<<uniqueid<<endl;
    }
};
int main(){
    int m,n;
    students one;

    cout<<"Enter the rollno : -   ";
    cin>>m;
    cout<<"Enter the marks: -   ";
    cin>>n;
    one.get(m,n);
    one.put();
    cout<<endl<<one.rollno;
    cout<<endl<<one.name;
cout<<endl;
return 0;
}