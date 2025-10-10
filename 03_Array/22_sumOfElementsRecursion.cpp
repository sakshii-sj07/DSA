// sum of elements in array using recursion

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

int Sum(struct Array &arr , int n) {
     if(n <= 0) {
        return 0;
     } else {
        return Sum(arr, n-1) + arr.A[n-1];
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
    }
    arr.length = n;
    
    Display(arr);

    cout<<"Sum is "<<Sum(arr, arr.length);
    return 0;
}