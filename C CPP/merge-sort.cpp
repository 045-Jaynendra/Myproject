#include <bits/stdc++.h>
using namespace std;
class mrg
{
public:
    void mrgesot(int arr[], int n)
    {
        
    }
};
int main()
{
    mrg ob;
    int n;
    cout << "Enter size :: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ob.mrgesot(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}