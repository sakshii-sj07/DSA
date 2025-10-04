// find sum of digits using recursion

#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    if(n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Sum of digits of number "<<num<<" is "<<sumOfDigits(num);
    return 0;
}