// Upper triangular row major mapping

#include<iostream>
using namespace std;

class upperTriangular {
    private:
        int *A;
        int n;
    public:
        upperTriangular() {
            n = 0;
            A = new int[0];
        }
        upperTriangular(int n) {
            this->n = n;
            A = new int[n*(n+1)/2];
        }

        void set(int i, int j, int element);
        int get(int i, int j);
        void Display();
};

void upperTriangular::set(int i, int j, int element) {
    if(i <= j) {
        A[n*(i-1)-(i-2)*(i-1)/2+j-i] = element;
    }
}

int upperTriangular::get(int i, int j) {
    if(i <= j) {
        return A[n*(i-1)-(i-2)*(i-1)/2+j-i];
    } else {
        return 0;
    }
}

void upperTriangular::Display() {
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i <= j) {
                cout<<A[n*(i-1)-(i-2)*(i-1)/2+j-i]<<" ";
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    
}

int main() {
    int d;
    cout<<"Enter dimensions : ";
    cin>>d;

    upperTriangular ut(d);

    int el;
    cout<<"Enter all Elements : "<<endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin>>el;
            ut.set(i , j , el);
        }
    }
    
    ut.Display();

    return 0;
}