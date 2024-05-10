#include <iostream>
using namespace std;
int main()
{
    int b, m, n, i, j, a = 0;
    cin >> b >> m >> n;
    int k[m], u[n];
    for (i = 0; i < m; i++)
        cin >> k[i];
    for (i = 0; i < n; i++)
        cin >> u[i];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((a < (k[i] + u[j])) && (b >= (k[i] + u[j])))
            {
                a = (k[i] + u[j]);
            }
        }
    }
    if (a > 0)
        cout << a;
    else
        cout << "-1";
}