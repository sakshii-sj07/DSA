// power of any number 

#include<iostream>
#include<math.h>
using namespace std;

int power(int m , int n) {
    if (n == 0) {
        return 1;
    } else {
        return power(m , n-1) * m;
    }
}

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int pow;
    cout<<"Enter power : ";
    cin>>pow;

    cout<<power(num , pow);
    return 0;
}