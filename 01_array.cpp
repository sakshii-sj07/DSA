#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4};
    arr[0]=12;
    arr[1]=13;
    arr[2]=32;
    cout<<sizeof(arr)<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[1]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}