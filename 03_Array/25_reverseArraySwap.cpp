// Reversing array by swapping method.

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

int reverse(Array arr) {
    for (int i = 0 , j = arr.length - 1; i < j; i++, j--) 
    {
        int temp = arr.A[i];
        arr.A[i] = arr.A[j];
        arr.A[j] = temp;
    }
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

    reverse(arr);
    cout<<"Reversed ";
    Display(arr);

    delete[] arr.A;
    return 0;
}