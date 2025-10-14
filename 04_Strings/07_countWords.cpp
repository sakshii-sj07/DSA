// Counting words in string

#include<iostream>
using namespace std;

int main() {
    char S[] = "How are   you";

    int countWords = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {
        if(S[i] == ' ' && S[i-1] != ' ') {
            countWords++;
        } 
    }
    
    cout<<"Number of words : "<<countWords + 1;
    return 0;
}