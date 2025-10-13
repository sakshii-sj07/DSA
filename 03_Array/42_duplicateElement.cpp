// Finding Duplicate elements in Array...

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

void Duplicate(Array arr) {
    int lastDuplicate = 0;
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i] == arr.A[i+1] && arr.A[i] != lastDuplicate) {
            cout<<arr.A[i]<<" ";
            lastDuplicate = arr.A[i];
        }
    }
    
}
int main() {
    Array arr;
    cout<<"Enter total space in Array : ";
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
    
    cout<<"Duplicate elements : ";
    Duplicate(arr);
    return 0;
}