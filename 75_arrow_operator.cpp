#include<iostream>
using namespace std;
typedef struct student {
    int rollno;
    string name;
    float percentage;
}stu;
int main(){
    student* s = NULL;
    s = (student *)malloc(sizeof(struct student));
    s->name = "jatin_kartik";
    cout<<s->name;

cout<<endl;
return 0;
}