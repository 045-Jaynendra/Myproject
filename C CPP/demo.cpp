#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> b;
        a += b[0];
        a += b[1];
        for (int i = 3; i < b.length(); i++)
        {
            a += b[i];
            i++;
        }
        cout << a << endl;
    }

    return 0;
}