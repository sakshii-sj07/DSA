#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l=0 , int b=0) {
            length = l;
            breadth = b;
        }
        int area() {
            return length*breadth;
        }
        void changeLength(int l) {
            length = l;
        }
};
int main() {
    Rectangle r(10,5);
    cout<<"Area is "<<r.area()<<endl;
    r.changeLength(20);
    cout<<"New area is "<<r.area()<<endl;
    return 0;
}