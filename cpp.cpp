#include <iostream>
#include<string>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int input;
    string input2;
    double input1;
    cin >> input;
    fflush(stdin);
    cin >> input1;
    fflush(stdin);
    cin >> input2;
    fflush(stdin);
    getline(cin,input2);
    double add = input1 + d;
    cout << input + i << endl;
    cout <<setprecision(1)<< add << endl;
    cout << s<<input2;


    return 0;
}

// int i2;
// double d2;
// string s2;

// // Read and save an integer, double, and String to your variables.
// cin >> i2;
// cin >> d2;
// getline(cin >> ws, s2); // eat whitespace

// // Print the sum of both integer variables on a new line.
// cout << i + i2 << endl;

// // Print the sum of the double variables on a new line.
// cout << fixed <<setprecision(1) << d + d2 << endl;
// //  
// // Concatenate and print the String variables on a new line
// // The 's' variable above should be printed first.
// cout << s + s2 << endl;
// }