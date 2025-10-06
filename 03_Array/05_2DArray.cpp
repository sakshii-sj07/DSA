// 2D array using various methods

#include<iostream>
using namespace std;

int main() {
    cout<<"Method 1 "<<endl;
    // Method 1 : Normal Declaration.
    // Inside Stack ...

    int A[3][4] = {{1,2,3,4} , {2,4,6,8} , {3,5,7,9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Method 2 "<<endl;
    // Method 2 : Array of pointer.
    // Partial Heap ...

    int *B[3] ;
    B[0] = new int[4]{1,2,3,4};
    B[1] = new int[4]{2,4,6,8};
    B[2] = new int[4]{3,5,7,9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Method 3 "<<endl;
    // Method 3 : Double pointer
    // Everything inside Heap ...

    int **C;
    C = new int *[3];
    C[0] = new int[4]{1,2,3,4};
    C[1] = new int[4]{2,4,6,8};
    C[2] = new int[4]{3,5,7,9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}