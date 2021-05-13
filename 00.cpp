#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sam, sam1, sam2, sam3;
    char c;
    char *input;
    sam = "flower";
    sam1 = "flight";
    sam2 = "flow";
    sam3 = "flowchart";
    cout << "common prefix is : -";
    for (int j = 0; j < 4; j++)
    {
        c = sam[j];

        if ((sam[j] == c) && (sam1[j] == c) && (sam2[j] == c) && (sam3[j] == c)){
        cout << c;
    }
    else{
        exit;
    }
    
}

cout << endl;
return 0;
}