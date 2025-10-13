// Counting duplicate elements using hash table.

#include<iostream>
using namespace std;

class Array {
    public:
    int *A;
    int *H;
    int size;
    int length;
};

void Display(Array arr) {
    cout<<"Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int Duplicate(Array arr) {
    int l = arr.A[0];
    int h = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i] > h) {
            h = arr.A[i];
        }
    }
    
    arr.H = new int[h + 1] {0};

    for (int i = 0; i < arr.length; i++)
    {
        arr.H[arr.A[i]]++;
    }
    
    for (int i = l; i <= h; i++)
    {
        if(arr.H[i] > 1) {
            cout<<i<<" Appearing "<<arr.H[i]<<" times "<<endl;
        }
    }
    
}

int main() {
    Array arr;
    cout<<"Enter total space in Array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    int n;
    cout<<"Enter elements in Array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }

    Display(arr);
    Duplicate(arr);
    
    return 0;
}