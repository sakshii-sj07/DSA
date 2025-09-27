#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;

    void initialize(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};
int main() {
    Rectangle r = {0,0};

    int l ,  b;
    cout<<"Enter length and breadth : ";
    cin>>l>>b;

    r.initialize(l , b);
    
    cout<<"Area is : "<<r.area()<<endl;
    cout<<"Perimeter is : "<<r.perimeter()<<endl;
    return 0;
}