// Counting vowels in string.

#include<iostream>
using namespace std;

int main() {
    char S[] = "How are you";
    int vowelCount = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ||
           S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U') {
                vowelCount++;
           }
    }
    
    cout<<"Vowels count : "<<vowelCount;
    return 0;
}