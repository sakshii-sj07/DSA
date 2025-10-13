// Counting duplicate elements in array 

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

int Duplicate(Array arr) {
    int i = 0;
    int j = 0;

    for ( i = 0; i < arr.length - 1; i++)
    {
        if(arr.A[i] == arr.A[i+1]) {
            j = i + 1;
            while(arr.A[j] == arr.A[i]){
                j++;
            }
            cout<<arr.A[i]<<" Appearing "<<j - i<<" times "<<endl;
            i = j - 1;
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
    cout<<"Enter elements in Array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }

    Display(arr);
    Duplicate(arr);
    
    return 0;
}