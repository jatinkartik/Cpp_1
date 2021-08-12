#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int no_array;
    int no_q;
    cin>>no_array;
    cin>>no_q;
    int array_size;
    int array[no_array][10000];
    
    for (int i = 0; i < no_array; i++)
    {
        cin>>array_size;
        for (int j = 0; j < array_size; j++)
        {
            cin>>array[i][j];
        }
        
    }
    int array_2[no_q];
    int array_3[no_q];
    for (int k = 0;k<no_q;k++)
    {
        cin>>array_2[k];
        cin>>array_3[k];
    }
    for(int b = 0;b<no_q;b++){
        cout<<array[(array_2[b])][(array_3[b])]<<endl;
    }
cout<<endl;
return 0;
}
// this is hackerank solution i have to try
#include <iostream>


using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int q;
    cin >> n >> q;
    
    // Create an array of pointers to integer arrays 
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;
        
        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }

    return 0;
}