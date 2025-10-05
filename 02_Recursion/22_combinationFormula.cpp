// combination formula that is nCr.

#include<iostream>
using namespace std;

int combination(int n, int r) {
    if(r == 0 || n == r) {
        return r;
    } else {
        return combination(n-1, r-1) + combination(n-1 , r);
    }
}

int main() {
    int a;
    cout<<"Enter n : ";
    cin>>a;

    int b;
    cout<<"Enter r : ";
    cin>>b;

    cout<<"Combination is : "<<combination(a,b);
    return 0;
}