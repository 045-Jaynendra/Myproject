#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unsigned long long int arr[n];
    unsigned long long int t, sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}