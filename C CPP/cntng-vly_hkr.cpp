#include <iostream>
using namespace std;
int main()
{
    int n, u = 0, cnt = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'U')
            u++;
        else if (arr[i] == 'D')
            u = 0;
        if (u >= 2 && ((arr[i + 1] == 'D' && (arr[i + 2] == 'D' || (i + 1) == (n - 1))) || i == (n - 1)))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}