#include<iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

// call by value
void fun(struct rectangle rect)
{
    rect.length = 23;
    rect.breadth = 45;
    cout<<"Length "<<rect.length<<" "<<"breadth "<<rect.breadth<<endl;
}

// call by address
void fun2(struct rectangle *rect2) {
    rect2->length = 12;
    rect2->breadth = 67;
    cout<<"Length "<<rect2->length<<" "<<"breadth "<<rect2->breadth<<endl;  
}

// call by reference
void fun3(struct rectangle &rect3) {
    rect3.length = 34;
    rect3.breadth = 51;
    cout<<"Length "<<rect3.length<<" "<<"breadth "<<rect3.breadth<<endl;
}
int main() {
    rectangle r = {10,5};
    fun(r);
    cout<<"Length "<<r.length<<" "<<"bradth "<<r.breadth<<endl;  // output 10 5
    
    rectangle r2 = {20,15};
    fun2(&r2);
    cout<<"Length "<<r2.length<<" "<<"bradth "<<r2.breadth<<endl;  // output  12  67

    rectangle r3 = {30,25};
    fun3(r3);
    cout<<"Length "<<r3.length<<" "<<"bradth "<<r3.breadth<<endl;  // output  12  67
    return 0;
}