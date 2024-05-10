#include <iostream>
using namespace std;
int main()
{
    int s, t, a, b, m, n, i, j = 0, k = 0;
    cin >> s >> t >> a >> b >> m >> n;
    int ap[m], o[n];
    for (i = 0; i < m; i++)
        cin >> ap[i];
    for (i = 0; i < n; i++)
        cin >> o[i];
    for (i = 0; i < m; i++)
    {
        if (((ap[i] + a) >= s) && ((ap[i] + a) <= t))
            j++;
    }
    for (i = 0; i < n; i++)
    {
        if (((o[i] + b) >= s) && ((o[i] + b) <= t))
            k++;
    }
    cout << j << endl
         << k;
    return 0;
}