// taylor series using horners rule

#include<iostream>
using namespace std;

double taylor(double x, double n) {
    double s = 1;
    while(n > 0) {
        s = 1 + x/n * s;
        n--;
    }
    return s;
}
int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int p;
    cout<<"Enter power : ";
    cin>>p;

    cout<<taylor(num, p);
    return 0;
}