#include <iostream>
using namespace std;
int main()
{
    int n, max = 0, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
            count++;
    }
    cout << count;
    return 0;
}