#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    fstream out("sample.txt",ios::in|ios::out);// opening file using constructor
    string input_string;
    getline(cin,input_string);
    out<<input_string;
    cout<<"the content which we are entering in file is : --"<<input_string;
    string output_string;
    getline(out,output_string);
    cout<<endl<<"the file content : - "<<output_string;
    out.close();
cout<<endl;
return 0;
}