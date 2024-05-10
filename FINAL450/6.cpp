#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"How many no. want to reverse :: ";
    cin>>n;
    int *arr = new int(n);
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nReverse of array is :: ";
    for (i = n-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}