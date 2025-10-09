// Improving linear search Method using Move to head...

#include<iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void Dispaly(struct Array arr) {
    cout<<"Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++)
    {
        if(key==arr->A[i]) {
            swap(&arr->A[i] , &arr->A[0]);
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
    cout<<"Enter elements in array : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
        arr.length = n;
    }
    
    Dispaly(arr);

    int k;
    cout<<"Enter key for search element : ";
    cin>>k;

    cout<<"Element found at " <<linearSearch(&arr,k)<<" index.";
    return 0;
}