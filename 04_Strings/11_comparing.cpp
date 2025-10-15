// omparing two strings if they are equal , smaller snd grater.

#include<iostream>
using namespace std;

int main() {
    char A[50];
    cout<<"Enter String A : ";
    cin.getline(A, 50);

    char B[50];
    cout<<"Enter String B : ";
    cin.getline(B, 50);


    int i , j;
    for (i= 0 , j = 0; A[i] != '\0' && B[j] != '\0'; i++ , j++)
    {
        if(A[i] != B[j])
        break;
    }

    if(A[i] == B[j]) {
        cout<<"A and B both are Equal";
    } else if (A[i] < B[j]) {
        cout<<"A is smaller than B ";
    } else {
        cout<<"A is Greater than B ";
    }
    
    return 0;
}