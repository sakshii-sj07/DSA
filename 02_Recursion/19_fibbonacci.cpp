// fibbonacci series using recursive call.

#include<iostream>
using namespace std;

int fib(int n) {
    if(n <= 1) {
        return n;
    } else {
        return fib(n-2) + fib(n-1);
    }
}

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Fibonacci series : ";
    for (int i = 0; i < num; i++)
    {
        cout<<fib(i)<<" ";
    }
    
    return 0;
}