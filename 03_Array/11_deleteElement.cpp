// Delete element in array

#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    cout<<"Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void Delete(struct Array *arr, int index) {
    if(index <= arr->length && index >= 0) {
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
}
int main() {
    struct Array arr;
    cout<<"Enter total space for Array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }
    
    Display(arr);

    int d;
    cout<<"Enter index number to Delete : ";
    cin>>d;

    Delete(&arr, d);

    Display(arr);
    return 0;
}