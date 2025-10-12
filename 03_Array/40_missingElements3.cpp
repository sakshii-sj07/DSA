// If there are multiple missing elements in array..

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

int missingElements(Array arr) {
    int l = arr.A[0];
    int h = arr.A[arr.length - 1];
    int diff = l - 0;

    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i] - i != diff) {
            while(diff < arr.A[i] - i) {
                cout<<i + diff<<" ";
                diff++;
            }
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

    cout<<"Missing elements : ";
    missingElements(arr);
    
    return 0;
}