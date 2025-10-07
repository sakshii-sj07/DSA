/* Maximum and Minimum

Find the maximum and minimum element in a 2D array.
(Covers comparison, traversal, and element access.)  */

#include<iostream>
using namespace std;

int main() {
    int m;
    cout<<"Enter rows : ";
    cin>>m;

    int n;
    cout<<"Enter columns : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter "<<m<<" X "<<n<<" rows and columns : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        } 
    }

    int maxVal = arr[0][0];
    int minVal = arr[0][0];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
            if(arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
        }
    }
    
    cout<<"Maximum value : "<<maxVal<<endl;
    cout<<"Minimum value : "<<minVal<<endl;
    
    return 0;
}