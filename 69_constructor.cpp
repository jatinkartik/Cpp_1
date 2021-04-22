#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class student {
public :
string name;
int rollno;
int age;
student(string nam,int rolln,int age = 0 ,double sgpa = 10){
    name = nam;
    rollno = rolln;
}
double sgpa;
void display(){

    cout<<endl<<"the name of the student is "<< name;
    cout<<endl<<"the roll no of the student is "<< rollno;
    cout<<endl<<"the age of student is "<<age;
    cout<<endl<<"the sgpa of the student is "<<sgpa;
}
};
int main(){
    student st("kamal_kumar",5045);  
    st.display();
cout<<endl;
return 0;
}