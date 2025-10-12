// merging two sorted arrays into a single array.

#include<iostream>
using namespace std;

int merging(int A1[] , int n1,int A2[], int n2, int A3[]) {
    int i=0, j=0, k=0;
    while(i < n1 && j < n2) {
        if(A1[i] < A2[j]) {
            A3[k++] = A1[i++];
        } else {
            A3[k++] = A2[j++];
        }
    }

    for ( ; i < n1; i++)
    {
        A3[k++] = A1[i];
    }
    for( ; i < n2; j++) 
    {
        A3[k++] = A2[j];
    }
    
}
int main() {
    int n1;
    cout<<"Enter elements in Array 1 : ";
    cin>>n1;

    int n2;
    cout<<"Enter elements in Array 2 : ";
    cin>>n2;

    int arr1[n1];
    cout<<"Enter "<<n1<<" elements of Array 1 : ";
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    
    int arr2[n2];
    cout<<"Enter "<<n2<<" elements of Array 2 : ";
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    
    cout<<"Elements in Array 1 : ";
    for (int i = 0; i < n1; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    cout<<"Elements in Array 2 : ";
    for (int i = 0; i < n2; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[n1+ n2];

    merging(arr1, n1, arr2, n2, arr3);

    cout<<"After merging two arrays ";
    
    for (int i = 0; i < n1 + n2; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    
    return 0;
}