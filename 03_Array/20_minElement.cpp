// minimum element in array

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

int minElement(struct Array arr) {
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i] <= min) {
            min = arr.A[i];
        }
    }
    return min;
}
int main() {
    struct Array arr;
    cout<<"Enter total space in array : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    int n;
    cout<<"Enter elements inn array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }
    
    Display(arr);

    cout<<"Minimum element is "<<minElement(arr);
    return 0;
}