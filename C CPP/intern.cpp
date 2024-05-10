#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int mid = (v[0] + v[v.size() - 1]) / 2;
    int i, t1 = v[0], t2;
    for (i = 0; i < n; i++)
    {
        if (v[i] <= mid)
        {
            t1 = v[i];
        }
        else
        {
            break;
        }
    }
    t2 = v[i];
    int s1;
    int m1 = (v[0] + v[i - 1]) / 2;
    for (int k = 0; k < i; k++)
    {
        if (v[k] <= m1)
        {
            s1 = v[k];
        }
        else
        {
            break;
        }
    }
    int s2;
    int m2 = (v[i] + v[v.size() - 1]) / 2;
    for (int k = i; k < v.size(); k++)
    {
        if (v[k] <= m2)
        {
            s2 = v[k];
        }
        else
        {
            break;
        }
    }
    int sum1 = 0;
    for (int x = 0; x < i; x++)
    {
        sum1 += abs(s1 - v[x]);
    }
    for (int x = i; x < v.size(); x++)
    {
        sum1 += abs(s2 - v[x]);
    }
    cout << "Sum :: " << sum1;
    return 0;
}