// Reversing string using another method.

#include<iostream>
using namespace std;

int main() {
    char A[50];
    cout<<"Enter string : ";
    cin.getline(A, 50);

    int i , j , temp;
    for (j = 0; A[j] != '\0'; j++)
    {
    }
    
    j = j - 1;

    for ( i = 0; i < j; i++ , j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    
    cout<<"Reversed string : "<<A;
    return 0;
}