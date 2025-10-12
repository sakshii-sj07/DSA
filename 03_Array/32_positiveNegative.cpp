// Positive elements in one side and negative elements are another side.

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

int positiveNegative(Array &arr) {
    int i = 0;
    int j = arr.length - 1;

    while(i < j) {
        while(arr.A[i] < 0) {
            i++;
        }
        while(arr.A[j] > 0) {
            j--;
        }

        if(i < j) {
            int swap = arr.A[i];
            arr.A[i] = arr.A[j];
            arr.A[j] = swap;
        }
    }
}
int main() {
    Array arr;
    cout<<"Enter total apace in Array : ";
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

    positiveNegative(arr);
    cout<<"After Sorting positive and negative ";
    Display(arr);
    return 0;
}