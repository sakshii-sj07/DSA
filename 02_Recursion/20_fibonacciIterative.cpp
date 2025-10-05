// fibonacci series using iterative call

#include<iostream>
using namespace std;

int fib(int n) {
    int t0 = 0;
    int t1 = 1;
    int sum;

    if(n <= 1) {
        return n;
    }

    for (int i = 2; i <= n; i++)
    {
        sum = t0+t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    for (int i = 2; i <= num; i++)
    {
        cout<<fib(i)<<" ";
    }
    
    return 0;
}