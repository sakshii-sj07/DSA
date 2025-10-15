// Checking string palindrome or not 

#include<iostream>
using namespace std;

int main() {
    char A[50];
    cout << "Enter string : ";
    cin.getline(A, 50);

    int i = 0, j = 0;

    // find length
    while (A[j] != '\0') {
        j++;
    }
    j--; // last index

    bool isPalindrome = true;
    while (i < j) {
        if (A[i] != A[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }

    return 0;
}
