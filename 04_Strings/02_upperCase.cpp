// Converting upper case to lower case

#include<iostream>
using namespace std;

int main() {
    char S[] = "WELCOME";
    for (int i = 0; S[i] != '\0'; i++)
    {
        S[i] = S[i] + 32;
    }
    cout<<"After converting upper case to lower case : "<<S;
    return 0;
}