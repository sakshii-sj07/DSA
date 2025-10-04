// taylor series method

#include<iostream>
using namespace std;

int taylor(int x , int n) {
    static int p = 1;
    static int f = 1;

    if(n == 0) {
        return 1;
    } else {
        int r = taylor(x , n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
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