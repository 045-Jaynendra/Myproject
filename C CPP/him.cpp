#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;
        cin >> b;
        a[0] = b[0];
        a[1] = b[1];
        int count=0;
        for (int i = 3; i < b.length(); i++)
        {
            a[(i + 1) / 2] = b[i];
            i++;
            cout << count++ << "\t" << a[(i+1)/2] << "\t" << b[i-1] << endl;
        }
        
        cout << endl << a << endl;
    }

    return 0;
}