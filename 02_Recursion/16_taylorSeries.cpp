// taylor series method

#include<iostream>
using namespace std;

int taylor(int x , int n) {
    static int power = 1;
    static int fact = 1;

    if(n == 0) {
        return 1;
    } else {
        int r = taylor(x , n-1);
        power = power*x;
        fact = fact*n;
        return r + power/fact;
    }
}
int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int p;
    cout<<"Enter power : ";
    cin>>p;

    cout<<taylor(n,p);
    return 0;
}