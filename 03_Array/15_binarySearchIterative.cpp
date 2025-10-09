// Binary search using Iteratve version.

#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    cout<<"Enter Elements : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(struct Array arr, int key) {
    int l, mid, h;
    l = 0;
    h = arr.length;

    while(l <= h) {
        mid = (l+h) / 2;
        if(key == arr.A[mid]) {
            return mid;
        } else if (key < arr.A[mid]) {
            h = mid-1;
        } else {
            l = mid+1;
        }
    }
    return -1;
}
int main() {
    struct Array arr;
    cout<<"Enter total space of Array : ";
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
    cout<<"Enter key to search : ";
    cin>>k;

    cout<<"Key is found at "<<binarySearch(arr,k)<<" index.";
    return 0;
}