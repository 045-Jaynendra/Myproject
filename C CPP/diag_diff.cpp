#include <iostream>
using namespace std;
int main()
{
    int d;
    cin >> d;
    int i, j, n1 = 0, n2 = 0, n, arr[d][d];
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < d; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                n1 = n1 + arr[i][j];
            if ((i + j) == (d - 1))
                n2 = n2 + arr[i][j];
        }
    }
    n = abs(n1 - n2);
    cout << n;
    return 0;
}