// increasing size of array.

#include<iostream>
using namespace std;

int main() {
    int *p;
    int *q;
    p = new int[5];    // original size of array thar i have to increase
    q = new int[10];   // Large size array

    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete []p;   // delete memory of p
    p = q;  
    q = NULL; 
    
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }
    
    return 0;
}