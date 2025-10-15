// finding duplicate element in string using hash table.

#include<iostream>
using namespace std;

int main() {
    char A[50];
    cout<<"Enter string : ";
    cin.getline(A,50);

    int H[26] = {0} , i;

    for ( i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97] += 1;
    }
    for ( i = 0; i < 26; i++)
    {
        if(H[i] > 1) {
            cout<<"Character "<< char(i + 'a')<<" appeares "<<H[i]<<" times.";
        }
    }
    
    
    return 0;
}