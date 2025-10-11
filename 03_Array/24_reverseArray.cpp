// Reversing the Array.

#include<iostream>
using namespace std;

class Array {
    public:
    int *A;
    int *B;
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

int Reverse(Array arr) {

    arr.B = new int[arr.size];

    for (int i = arr.length - 1 , j = 0; i >= 0 ; i-- , j++)
    {
        arr.B[j] = arr.A[i];
    }
    
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = arr.B[i];
    }

    delete[] arr.B;
}
int main() {
    Array arr;
    cout<<"Enter total space in array : ";
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

    Reverse(arr);
    cout<<"Reversed ";
    Display(arr);

    delete[] arr.A;
    return 0;
}