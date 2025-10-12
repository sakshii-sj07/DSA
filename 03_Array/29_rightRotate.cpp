// Right Rotation of elements in array..

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

void rightRotate(Array arr) {
    int last = arr.A[arr.length - 1];
    for (int i = arr.length - 1; i > 0; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
    arr.A[0] = last;
}
int main() {
    Array arr;
    cout<<"Enter total Space in array : ";
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
    cout<<"Enter element to rotate from : ";
    cin>>r;

    for (int i = 0; i < r; i++)
    {
        rightRotate(arr);
    }

    cout<<"After right side Rotation : ";
    Display(arr);
    
    delete[] arr.A;
    return 0;
}