#include<iostream>
using namespace std;

int main() {
    int length=0;
    int breadth=0;

    cout<<"Enter length and breadth : ";
    cin>>length>>breadth;

    int area = length*breadth;
    int perimeter = 2*(length+breadth);

    cout<<"Area is "<<area<<endl;
    cout<<"Perimeter is "<<perimeter<<endl;
    return 0;
}