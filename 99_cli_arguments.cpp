#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    if (argv[1] == "1")
    {
        cout << "jatin" << endl;
    }
    else if (argv[1] == "2")
    {
        cout << "kartik" << endl;
    }
    else
    {
        cout << "error" << endl;
    }
    cout << "argument is " << argv[1];
    // int value = int(argv[1]);

    cout << endl;
    cout << endl;
    return 0;
}
int DeleteElement()
{
    int arr[] = {43, 535, 65, 534, 535, 535, 635, 35, 35, 345};
    cout << "Enter the element to delete in the arrray: -";
    int input = 0;
    cin >> input;
    for (int i = 0; i < 10; i++)
    {
        if (input == arr[i])
        {
            cout << "Element found deleting " << endl;
            for (int j = i; j < ((sizeof(arr)) / 4) - 1; j++)
            {
                // cout<<((sizeof(arr)/4))-1<<endl;
                // cout<<"test"<<endl;
                arr[j] = arr[j + 1];
            }
            for (int c = 0; c < ((sizeof(arr)) / 4) - 1; c++)
            {
                cout << endl
                     << arr[c];
            }
            return 0;
        }
    }
    return 0;
}
int AddElement()
{
    int arr[] = {43, 535, 65, 534, 535, 535, 635, 35, 35, 345};
    int input1 = 0;
    cout << "Enter element you want to add : -";
    cin >> input1;
    cout << "Wait program is running you will get your result soon #### " << endl;
    arr[((sizeof(arr) / 4) + 1)] = input1;
    for (int k = 0; k < ((sizeof(arr) / 4) + 1); k++)
    {
        //  now i am adding element to end of array because lack of time to implement menu driven
        cout << endl
             << arr[k];
    }
    return 0;
}
int SearchElement()
{
    int arr[] = {43, 535, 65, 534, 535, 535, 635, 35, 35, 345};
    int input2 = 0;
    cout << "Search Element : - " << endl;
    cin >> input2;
    for (int q = 0; q < (sizeof(arr) / 4) - 1; q++)
    {
        if (input2 == arr[q])
        {
            cout << "Element found at location " << q;
            return 0;
        }
    }
    return 0;
}
int PrintElement()
{
    int arr[] = {43, 535, 65, 534, 535, 535, 635, 35, 35, 345};
    cout << "Printing array: -";
    for (int c = 0; c < ((sizeof(arr)) / 4) - 1; c++)
    {
        cout << endl
             << arr[c];
    }
    return 0;
}
