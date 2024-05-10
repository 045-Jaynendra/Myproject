#include <iostream>
using namespace std;
int main()
{
    int n, j;
    cin >> n >> j;
    int max = j;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max - j;
    return 0;
}