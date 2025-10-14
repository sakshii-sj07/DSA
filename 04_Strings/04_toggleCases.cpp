// Toggle cases means the string is mix of upper cases and lower case.

#include<iostream>
using namespace std;

int main() {
    char S[] = "WElComE";
    for (int i = 0; S[i] != '\0'; i++)
    {
        if(S[i] >= 65 && S[i] <= 90) {
            S[i] = S[i] + 32;
        } else if (S[i] >= 97 && S[i] <= 'z') {
            S[i] = S[i] - 32;
        } else {
            cout<<"Invalid Character.";
        }
    }
    cout<<"String is : "<<S;
    
    return 0;
}