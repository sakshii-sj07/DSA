// taylor series using iterative methoda that is loops.

#include<iostream>
using namespace std;

double taylor(double x, double n) {
    double s;
    while(n > 0) {
        s = 1 + x/n * s;
        n--;
    }
    return s;
}
int main() {
    double num;
    cout<<"Enter number : ";
    cin>>num;

    double p;
    cout<<"Enter power : ";
    cin>>p;

    cout<<taylor(num,p);
    return 0;
}