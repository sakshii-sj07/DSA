#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r;
    struct Rectangle *p = &r;
    p = new Rectangle;      // dynamically allocation.

    p->length = 23;
    p->breadth = 10;
    r.length = 21;

    cout<<"Length "<<p->length<<endl;
    cout<<"Breadth "<<p->breadth<<endl;
    cout<<"Area "<<p->length*p->breadth<<endl;

    delete []p;
    return 0;
}
