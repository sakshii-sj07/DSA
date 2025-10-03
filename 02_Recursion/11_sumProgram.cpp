// recursive function for dum

#include<iostream>
using namespace std;

int sum(int n) {
    if(n == 0) {
        return 0;
    } else {
        return sum(n-1) + n;
    }
}
int main() {
    int a;
    cout<<"Enter number : ";
    cin>>a;

    cout<<"Sum is "<<sum(a);
    return 0;
}