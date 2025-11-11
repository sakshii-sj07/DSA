// Diagonal matrix with c++ class

#include<iostream>
using namespace std;

class Diagonal {
    private:
        int *A;
        int size;
    public:
        Diagonal() {
            A = nullptr;
            size = 0;
        }
        Diagonal(int n) {
            A = new int[n];
            size = n;
        }
        void set(int i , int j , int x) {
            if(i == j) {
                A[i-1] = x;
            }
        }
        int get(int i , int j) {
            if(i == j) {
                return A[i-1];
            } else {
                return 0;
            }
        }
        void Display() {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if(i == j) {
                        cout<<A[i]<<" ";
                    } else {
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }
            
        }
        ~Diagonal() {
            delete []A;
        }
};
int main() {
    // Diagonal d(3);
    // d.set(1,1,4);
    // d.set(2,2,5);
    // d.set(3,3,6);

    // cout<<"Matrix is : "<<endl;
    // d.Display();

    // cout<<"Getting element from matrix : ";
    // cout<<d.get(2,2);

    int n;
    cout<<"Enter size of matrix : ";
    cin>>n;

    Diagonal d(n);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cout<<"Elements ("<<i<<","<<i<<") : ";
        cin >> x;
        d.set(i , i , x);
    }

    cout<<"Matrix is : "<<endl;
    d.Display();

    cout<<"Enter position to get element : ";
    int i , j;
    cin>>i>>j;
    cout<<"Element at ("<<i<<","<<j<<") : "<<d.get(i , j);
    
    return 0;
}