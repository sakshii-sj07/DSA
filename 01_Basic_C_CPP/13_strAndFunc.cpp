#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int initialize(struct Rectangle *r , int l, int b) {
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r) {
    return r.length*r.breadth;
}
int changeLength(struct Rectangle *r , int l) {
    r->length = l;
}
int main() {
    Rectangle rect;
    initialize(&rect, 10 , 5);
    cout<<"Length : "<<rect.length<<endl;
    cout<<"Breadth : "<<rect.breadth<<endl;
    cout<<"Area : "<<area(rect)<<endl;

    changeLength(&rect , 20);
    cout<<"Changed length : "<<rect.length<<endl;
    cout<<"New Area : "<<area(rect)<<endl;
    return 0;
}