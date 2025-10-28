// Checkng two strings are anagram or not

#include<iostream>
using namespace std;

int main() {
    char A[50];
    cout<<"Enter string A : ";
    cin.getline(A , 50);

    char B[50];
    cout<<"Enter string B : ";
    cin.getline(B , 50);

    int H[26] = {0};
    int i;

    for ( i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }

    for ( i = 0; B[i] != '\0'; i++)
    {
        H[B[i] - 97]--;
        if(H[B[i] - 97] < 0) {
            cout<<"Not anagram ";
            break;
        }
    }
    
    if(B[i] == '\0') {
        cout<<"Anagram";
    }
    
    return 0;
}