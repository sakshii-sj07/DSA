// Inserting elements in array.

#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void Append(struct Array *arr , int x) {
    if(arr->length<arr->size) {
        arr->A[arr->length++] = x;
    }
}

void Display(struct Array arr) {
    cout<<"Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

int main() {
    struct Array arr;
    cout<<"Enter total space of array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    int n;
    cout<<"Enter number of Elements in Array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length =  n;
    }

    Append(&arr, arr.size);
    Display(arr);
    return 0;
}