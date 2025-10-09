// Linear Search

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

int linearSearch(struct Array arr , int key) {
    for (int i = 0; i < arr.length; i++)
    {
        if(key==arr.A[i]) {
            return i;
        }
    }
    return -1;
}
int main() {
    struct Array arr;
    cout<<"Enter total space of array : ";
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

    int k;
    cout<<"Enter key to search : ";
    cin>>k;

    linearSearch(arr,k);
    cout<<"The key "<<k<<" is found at "<<linearSearch(arr,k) <<"Index .";
    return 0;
}