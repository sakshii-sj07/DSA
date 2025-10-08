#include<iostream>
using namespace std;

struct Array 
{
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

void Append(struct Array *arr, int x) {
    if(arr->length < arr->size) 
    arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x) {
    if(index >= 0 && index <= arr->length && arr->length < arr->size) {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    } else {
        cout<<"Invalid number ";
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
    
    Display(arr);
    
    int appendSize;
    cout<<"Enter Append element : ";
    cin>>appendSize;

    Append(&arr, appendSize);
    Display(arr);

    int index, value;
    cout<<"Enter Index and Value to insert : ";
    cin>>index>>value;

    insert(&arr, index , value);
    Display(arr);

    return 0;
}