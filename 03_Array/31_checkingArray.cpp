// Checking array it is sorted or not

#include<iostream>
using namespace std;

struct Array {
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

bool isSorted(Array arr,int n) {
    for (int i = 0; i < n-1; i++)
    {
        if(arr.A[i] > arr.A[i+1]) {
            return false;
        }
    }
    return true;
}
int main() {
    Array arr;
    cout<<"Enter total space in array : ";
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

    cout<<"If array is sorted Display 1 else Display 0 "<<endl;

    cout<<isSorted(arr,arr.size);
    return 0;
}