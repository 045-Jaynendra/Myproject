#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long p1 = 0, p2 = 0;
        cin >> n;
        int i = n;
        int j = n - 1;
        do
        {
            p1 = p1 + pow(2,i);
            p2 = p2 + pow(2,j);
            i++;
            j--;
            if(i>n)
                i = 1;
        } while (i < j);
        cout << abs(p1 - p2) << endl;
    }
    return 0;
}