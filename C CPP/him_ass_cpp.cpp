#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    vector<int> v, ans;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    set<int> s(v.begin(), v.end());
    if (s.size() == 1)
    {
        cout<<"-1";
        return 0;
    }
    sort(v.begin(), v.end());
    int max = v[v.size() - 1];
    int j = 0;     
    while (v[j] != max)
    {
        j++;
    }
    int ind = find(v.begin(), v.end(), v[j-1]) - v.begin();
    cout << j-ind;
    return 0;
}