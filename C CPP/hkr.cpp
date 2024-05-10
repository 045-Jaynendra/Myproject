#include <iostream>
using namespace std;
int main()
{
    int n,j;
    cin>>n>>j;
    int arr[n];
    int d=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i!=j)
            d+=arr[i];
    }
    int ch;
    cin>>ch;
    d/=2;
    d=ch-d;
    if(d>0)
        cout<<d;
    else
        cout<<"Bon Appetit";
    return 0;
}