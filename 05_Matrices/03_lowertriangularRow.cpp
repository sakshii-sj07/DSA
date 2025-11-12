// Lower triangular matrix row major

#include<iostream>
using namespace std;

class lowerTriangular {
    private:
        int *A;
        int n;

    public:
        lowerTriangular() {
            n = 0;
            A = new int[0];
        }
        lowerTriangular(int n) {
            this->n = n;
            A = new int[n* (n + 1) / 2];
        }
        ~lowerTriangular() {
            delete []A;
        }

        void set(int i , int j, int element);
        int get(int i , int j);
        void Display();
};

void lowerTriangular::set(int i, int j, int element) {
    if(i >= j) {
        A[i * (i - 1) / 2 + j - 1] = element;
    }
}

int lowerTriangular::get(int i, int j) {
    if(i >= j) {
        return A[i * (i - 1) / 2 + j - 1];
    } else {
        return 0;
    }
}

void lowerTriangular::Display() {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i >= j) {
                cout<<A[i * (i - 1) / 2 + j -1]<<" ";
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

    lowerTriangular lt(d);

    int el;
    cout<<"Enter all elements : "<<endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> el;
            lt.set(i , j , el);
        }
        
    }

    lt.Display();

    return 0;
    
}