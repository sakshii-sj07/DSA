// Counting Consonants in string.

#include<iostream>
using namespace std;

int main() {
    char S[] = "How are you";

    int vowelCount = 0;
    int consonantCount = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ||
           S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U') {
                vowelCount++;
           } else if ((S[i] >= 65 && S[i] <= 90) || (S[i] >= 97 && S[i] <= 122)) {
                consonantCount++;
           }
    }
    
    cout<<"Consonant count : "<<consonantCount;
    return 0;
}