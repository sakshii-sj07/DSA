// factorial of n numbers 

#include<iostream>
using namespace std;

int fact(int n) {
    if(n == 1) {
        return 1;
    } else {
        return fact(n-1) * n;
    }
}
int main() {
    int a;
    cout<<"Enter number : ";
    cin>>a;

    cout<<"Factorial is "<<fact(a);
    return 0;
}