// Diagonal matrix

#include<iostream>
using namespace std;

struct Matrix {
    int *A;
    int n;
};

void set(Matrix *m , int i , int j , int x) {
    if(i == j) {
         m->A[i - 1] = x;
    }
}

int get(Matrix m , int i , int j) {
    if(i == j) {
        return m.A[i - 1];
    } else {
        return 0;
    }
}

void Display(Matrix m) {
    int i ,j;
    for ( i = 0; i < m.n; i++)
    {
        for ( j = 0; j < m.n; j++)
        {
            if(i == j) {
                cout<<m.A[i]<<" ";
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main() {
    Matrix m;
    cout<<"Enter the size of matrix : ";
    cin>>m.n;

    m.A = new int[m.n];

    cout<<"Enter diagonal elements : "<<endl;
    for (int i = 1; i <= m.n; i++)
    {
        int x;
        cout<<"Elements ("<<i<<","<<i<< ") : ";
        cin>>x;
        set(&m , i , i , x);
    }

    cout<<"Matrix Display : "<<endl;
    Display(m);

    cout<<"Enter position to get value (i , j): ";
    int i , j;
    cin >> i >> j;
    cout<<"Value at position (" << i <<"," << j << ") = " << get(m , i , j ) <<endl;

    return 0;
    
}