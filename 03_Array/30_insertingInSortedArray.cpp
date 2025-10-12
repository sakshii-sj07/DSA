// Inserting Array in a sorted list.

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

void insert(Array arr, int element) {
    if(arr.length == arr.size) {
        cout<<"Array is full."<<endl;
        return;
    }

    int i = arr.length - 1;
    while(arr.A[i] > element) {
        arr.A[i+1] = arr.A[i];
        i--;
    }
    arr.A[i+1] = element;
    arr.length++;
}
int main() {
    Array arr;
    cout<<"Enter total space in array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    
    int n;
    cout<<"Enter Elements in array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }
    
    Display(arr);

    int e;
    cout<<"Enter element to insert : ";
    cin>>e;

    insert(arr,e);
    cout<<"After inserting element in sorted Array ";
    Display(arr);
    return 0;
}