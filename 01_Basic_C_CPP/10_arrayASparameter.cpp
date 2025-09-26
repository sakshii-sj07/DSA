#include<iostream>
using namespace std;

void fun(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int A[] = {1,2,3,4,5};
    int n = 5;
    fun(A,n);
    for(int x : A) {
        cout<<x<<" ";
    }
    return 0;
}