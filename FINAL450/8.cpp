#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k, tmp;
    cout<<"Enter size of array :: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<"Enter the value of K :: ";
    cin>>k;
    cout<<k<<"th min element in the array :: "<<arr[k-1]<<endl<<k<<"th max element in the array :: "<<arr[n-k];
    return 0;
}