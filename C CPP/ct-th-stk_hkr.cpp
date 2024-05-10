#include <iostream>
using namespace std;
int main()
{
    int n, i, min, max = 0, tmp_min = 0, cnt = 0;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    cout << n << endl;
    while (1)
    {
        for (i = 0; i < n; i++)
        {
            arr[i] = arr[i] - min;
            if (arr[i] > 0)
                cnt++;
        }
        min = max;
        for (i = 0; i < n; i++)
        {
            if (arr[i] < min && arr[i] > 0)
                min = arr[i];
        }
        if (cnt == 0)
            break;
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}