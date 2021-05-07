#include <bits/stdc++.h>
using namespace std;

int main()
{
    int jkt = 99;
    int &jatin = jkt;
    cout << jatin << endl;
    jkt = 00;
    cout << jatin << endl;
    jkt = 32;
    cout << jatin << endl;
    jkt = 22;
    cout << jatin << endl;

    cout << endl;
    return 0;
}