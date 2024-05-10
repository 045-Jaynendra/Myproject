#include <iostream>
using namespace std;
int main()
{
    int n, j, cnt = 0;
    cin >> n >> j;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < (n - 1); i++)
        for (int k = (i + 1); k < n; k++)
            if ((arr[i] + arr[k]) % j == 0)
                cnt++;
    cout << cnt;
    return 0;
}