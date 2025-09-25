#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r;

    r.length = 12;
    r.breadth = 10;

    cout<<"Length is "<<r.length<<endl;
    cout<<"Breadth is "<<r.breadth<<endl;
    cout<<"Area is "<<r.length*r.breadth<<endl;

    cout<<sizeof(r)<<endl;
    return 0;
}       
