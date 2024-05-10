#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rearrange(long long *arr, int n)
    {
        long long *rarr = new long long[n];
        for (int i = 0; i < n; i++)
            rarr[i] = arr[i];
        int i = 0;
        int j = n - 1;
        int k = 0;
        while (i <= j)
        {
            arr[k++] = rarr[j--];
            arr[k++] = rarr[i++];
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}