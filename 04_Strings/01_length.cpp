// finding length of string 

#include<iostream>
using namespace std;

int main() {
    int c;
    cout<<"Enter number of String elements : ";
    cin>>c;

    char S[c+1];

    cout<<"Enter "<<c<<" elements : ";
    for (int i = 0; i < c; i++)
    {
        cin>>S[i];
    }

    int i;
    for ( i = 0;  S[i] !='\0'; i++) 
    {
    }
    cout<<"Length of string "<<i<<endl;
    
    return 0;
}