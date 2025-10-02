// Head recursion means call the function first and do anything after that.

#include<iostream>
using namespace std;

int fun(int n) {
    if(n>0) {
        fun(n-1);
        cout<<n;
    }
}
int main() {
    fun(3);
    return 0;
}