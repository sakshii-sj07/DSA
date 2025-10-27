// Finding duplicate elements using bitwise operators

#include<iostream>
using namespace std;

int main() {
    char A[50];
    cout<<"Enter string : ";
    cin.getline(A, 50);

    int H = 0;
    int x = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << A[i] - 97;

        if((x & H) > 0) {
            cout<<A[i] <<" is duplicate"<<endl;
        } else {
            H = x | H;
        }
    }
    
    return 0;
}