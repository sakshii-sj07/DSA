// Left rotation of elements in array 

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

void leftRotate(Array arr) {
    int first = arr.A[0];
    for (int i = 0; i < arr.length - 1; i++)
    {
        arr.A[i] = arr.A[i+1];
    }
    arr.A[arr.length - 1] = first;
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
    
    int r;
    cout<<"Enter element to rotate Array : ";
    cin>>r;

    for (int i = 0; i < r; i++)
    {
        leftRotate(arr);
    }
    
    cout<<"After left Rotation ";
    Display(arr);
    return 0;
}