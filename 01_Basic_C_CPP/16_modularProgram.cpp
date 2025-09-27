#include<iostream>
using namespace std;

int area(int l , int b) {
    return l*b;
}
int perimeter(int l, int b) {
    return 2*(l+b);
}
int main() {
    int length = 0;
    int breadth = 0;

    cout<<"Enter length and Breadth : ";
    cin>>length>>breadth;

    cout<<"Area is "<<area(length, breadth)<<endl;
    cout<<"Perimeter is "<<perimeter(length, breadth)<<endl;
    return 0;
}