#include<iostream>
using namespace std;

int main() {
    int a =10;
    int *p;
    p = &a;

    cout<<p<<" "<<&a<<" "<<a<<" "<<*p<<endl;

    int arr[5] = {1,2,3,4,5};
    int *q;
    q = arr;

    for (int i = 0; i < 5; i++)
    {
        cout<<q[i]<<" ";
    }

}
