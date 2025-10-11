// Set element at index

#include<iostream>
using namespace std;

struct Array{
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

int Set(struct Array arr, int index, int element) {
    if(index >= 0 && index < arr.length) {
        arr.A[index] = element;
    }
}
int main() {
    struct Array arr;
    cout<<"Enter total space of array : ";
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

    int a,b;
    cout<<"Enter index and element to set new element : ";
    cin>>a>>b;

    Set(arr,a,b);
    cout<<"After set new element : ";
    Display(arr);
    return 0;
}