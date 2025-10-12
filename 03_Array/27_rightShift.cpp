// Right shifting of array

#include<iostream>
using namespace std;

class Array {
    public:
    int *A;
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

int rightShift(Array arr) {
    for (int i = arr.length-1; i >= 0; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
    arr.A[0] = 0;
}
int main() {
    Array arr;
    cout<<"Enter Total space in Array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    int n;
    cout<<"Enter elements in array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }
    
    Display(arr);

    rightShift(arr);
    cout<<"After shifting right side ";
    Display(arr);
    return 0;
}