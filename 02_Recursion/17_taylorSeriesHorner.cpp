// taylor series using horners rule

#include<iostream>
using namespace std;

double taylor(double x, double n) {
    double static s = 1;
    if(n == 0) {
        return s;
    } else {
         s = 1 + x/n*s;
         return taylor(x, n-1);
    }
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