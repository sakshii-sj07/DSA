// simple function for finding combination.

#include<iostream>
using namespace std;

int fact(int n) {
    if(n == 0) {
        return 1;
    } else {
        return fact(n-1) * n;
    }
}

int combination(int n, int r) {
    int a,b,c;
    a = fact(n);
    b = fact(r);
    c = fact(n-r);
    return a / (b*(c));
}
int main() {
    int x;
    cout<<"Enter n : ";
    cin>>x;

    int y;
    cout<<"Enter r : ";
    cin>>y;

    cout<<combination(x,y);
    return 0;
}