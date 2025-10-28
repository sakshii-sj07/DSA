// Finding permutations of string.

#include<iostream>
using namespace std;

void permut(char s[] , int k) {
    static int A[10] = {0};
    static char result[10];
    int i;

    if(s[k] == '\0') {
        result[k] = '\0';
        cout<<result<<endl;
    } else {
        for ( i = 0; s[i] != '\0'; i++)
        {
            if(A[i] == 0) {
                result[k] = s[i];
                A[i] = 1;
                permut(s , k+1);
                A[i] = 0;
            }
        }
        
    }
}
int main() {
    char s[10];
    cout<<"Enter string : ";
    cin.getline(s , 10);
    permut(s, 0);
    return 0;
}