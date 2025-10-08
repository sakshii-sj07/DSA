// Inserting element in array.

#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void insert(struct Array *arr, int index, int x) {
    if(index >= 0 && index <= arr->length && arr->length < arr->size) {
    for (int i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i-1];
    }  
    arr->A[index] = x;
    arr->length++;
} else {
    cout<<"Invalid Index";
}
}

void display(struct Array arr) {
    cout<<"Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
}
int main() {
    struct Array arr;
    cout<<"Enter total space in array : ";
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
    
    int index , value;
    cout<<"Enter index and value for insert element : ";
    cin>>index>>value;

    insert(&arr, index , value);
    display(arr);
    return 0;
}