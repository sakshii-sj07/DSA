// Converting lower case to upper case

#include<iostream>
using namespace std;

int main() {
    char S[] = "welcome";
    for (int i = 0; S[i] != '\0'; i++)
    {
        S[i] = S[i] - 32;
    }
    
    cout<<"After converting lower case to upper case : "<<S;
    return 0;
}