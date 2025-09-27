#include<iostream>
using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
       Arithmetic(T x=0 , T y=0);
       int add();
       int sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T x, T y) {
    a = x;
    b = y;
}

template<class T>
int Arithmetic<T>::add() {
    T c;
    c = a + b;
    return c;
}

template<class T>
int Arithmetic<T>::sub() {
    T c;
    c = a - b;
    return c;
}
int main() {
    Arithmetic<float> A(10,5);
    cout<<"Addition : "<<A.add()<<endl;
    cout<<"Subtraction : "<<A.sub()<<endl;
    return 0;
}