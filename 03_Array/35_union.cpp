// Set operation Union in c++ Which does not alow to get duplicate elements.

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

void Union(Array arr1, Array arr2, Array &arr3) {
    int i = 0;
    int j = 0;
    int k = 0;

    while( i < arr1.length && j < arr2.length ) {
        if(arr1.A[i] < arr2.A[j]) {
            arr3.A[k++] = arr1.A[i++];
        } else if (arr1.A[i] > arr2.A[j]) {
            arr3.A[k++] = arr2.A[j++];
        } else {
            arr3.A[k++] = arr1.A[i++];
            j++;
        }
    }

    while(i < arr1.length) {
        arr3.A[k++] = arr1.A[i++];
    }

    while(j < arr2.length) {
        arr3.A[k++] = arr2.A[j++];
    }
    
    arr3.length = k;
} 
int main() {
    Array arr1;
    cout<<"Enter total space in Array 1 : ";
    cin>>arr1.size;

    arr1.A = new int[arr1.size];
    arr1.length = 0;

    int n1;
    cout<<"Enter elements in Array 1 : ";
    cin>>n1;

    cout<<"Enter "<<n1<<" elements in Array 1 : ";
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1.A[i];
        arr1.length = n1;
    }

    Array arr2;
    cout<<"Enter total space in Array 2 : ";
    cin>>arr2.size;

    arr2.A = new int[arr2.size];
    arr2.length = 0;

    int n2;
    cout<<"Enter elements in Array 2 : ";
    cin>>n2;

    cout<<"Enter "<<n2<<" elements in Array 2 : ";
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2.A[i];
        arr2.length = n2;
    }
    
    cout<<"Array 1 ";
    Display(arr1);

    cout<<"Array 2 ";
    Display(arr2);

    Array arr3;
    arr3.size = arr1.length + arr2.length;
    arr3.A = new int[arr3.size];
    arr3.length = 0;

    Union(arr1,arr2,arr3);
    cout<<"Union of Array ";
    Display(arr3);
    return 0;
}