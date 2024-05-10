#include<iostream>
using namespace std;
int main()
{
    int n, i, min, max;
    cout<<"How many no. want to reverse :: ";
    cin>>n;
    int *arr = new int(n);
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i == 0)
            min = max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    cout << "Maximum value is :: " << max << "\nMinimum value is :: " << min;
    return 0;
}