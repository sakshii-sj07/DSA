//  Binary Search using recursive function..

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

int binarySearch(int a[] , int l, int h, int key) {
    int mid;

    if(l <= h) {
        mid = (l+h) / 2;
        if(key == a[mid]) {
            return mid;
        } else if (key < a[mid]) {
            return binarySearch(a, l, mid-1, key);
        } else {
            return binarySearch(a, mid+1, h, key);
        }
        return -1;
    }
}
int main() {
    struct Array arr;
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

    Display(arr);
    
    int k;
    cout<<"Enter key to  search : ";
    cin>>k;

    cout<<"Element is found at "<<binarySearch(arr.A, 0 , arr.length, k)<<" index.";
    return 0;
}