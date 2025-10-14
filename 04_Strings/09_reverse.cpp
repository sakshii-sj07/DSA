// Reversing a string

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    cout << "Enter name : ";
    cin.getline(name, 50);

    char name2[50];

    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
    }

    i = i - 1;
    int j;

    for (j = 0; i >= 0; i--, j++)
    {
        name2[j] = name[i];
    }
    name2[j] = '\0';
    cout << "Reversed String : " << name2;

    return 0;
}