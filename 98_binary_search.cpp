#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int number; 
    int startElement = 0,endElement;
    cout<<"Enter the size of array: -";
    cin>>number;
    endElement = number;
    int array[number];
    for(int i = 0; i<number;i++)
{
    cout<<"Enter the value of element "<<i<<"  : -";
    cin>>array[number];

}
// here we assume the array is already sorted 
//  binary search begin
cout<<endl<<"Enter the number to find in the array: -";
int findNumber;
cin>>findNumber;

int middlePoint = (startElement+endElement-1)/2;

while(findNumber==array[middlePoint])
{
    if(findNumber>array[middlePoint]){
    startElement = middlePoint;
    }
    else
    if(findNumber<array[middlePoint])
    {
        endElement = middlePoint;
    }
    if(findNumber==array[middlePoint]){
        cout<<endl<<"the number is at index "<<middlePoint;
    }
    else
    middlePoint = (startElement+endElement)/2;
}

cout<<endl;
return 0;
}