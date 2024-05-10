#include <iostream>
using namespace std;
int main()
{
    int i, j, arr[5], tmp;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 4; i++)
    {
        for (j = (i + 1); j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << arr[0] + arr[1] + arr[2] + arr[3] << " ";
    cout << arr[1] + arr[2] + arr[3] + arr[4];
    return 0;
}