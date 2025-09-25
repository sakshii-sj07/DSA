#include<iostream>
using namespace std;

int main() {
    int a =10;
    int &r = a;

    cout<<r<<" "<<a<<endl;
    r++;
    cout<<r<<" "<<a<<endl;
    return 0;
}
