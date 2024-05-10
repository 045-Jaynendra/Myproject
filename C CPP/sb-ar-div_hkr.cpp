#include <iostream>
using namespace std;
int main()
{
    int n, i, d, h, j, a = 0, y, s = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> h >> j;
    for (i = 0; i < n; i++)
    {
        for (y = i; y < (i + j); y++)
        {
            a = a + arr[y];
        }
        if (a == h)
            s++;
        a = 0;
    }
    cout<<s;
    return 0;
}