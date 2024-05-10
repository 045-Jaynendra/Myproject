#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 38)
        {
        }
        else
        {
            if ((arr[i] + 1) % 5 == 0)
                arr[i] = arr[i] + 1;
            if ((arr[i] + 2) % 5 == 0)
                arr[i] = arr[i] + 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}