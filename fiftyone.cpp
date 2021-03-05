#include<iostream>
#include<stdlib.h>
using namespace std;
typedef union fifty1
{
    int rollno;
    // string name;
    float salery;
}jkt;
typedef struct fiftyone
{
    int rollno;
    string name;
    float salery;
}yehbhiteekhai;

int main(){
    // yehbhiteekhai jatin;
    fiftyone jatin;
    jkt jatin1;
    jatin1.rollno = 77;
    cout<<"the value of jatin1 union is  :"<<jatin1.rollno<<endl;
    cout<<"Enter the value of rollno";
    cin>>jatin.rollno;
    cout<<jatin.rollno<<endl;
    cout<<"Enter the name";
    cin>>jatin.name;
    cout<<jatin.name<<endl;
    cout<<"Enter the amount of sallery";
    cin>>jatin.salery;
    cout<<jatin.salery<<endl;
    cout<<"Enter the value of rollno";
    cin>>jatin.rollno;
    cout<<jatin.rollno<<endl;
cout<<endl;
return 0;
}