#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int, int>> q;
    q.push({1,1});
    q.push({1,3});
    q.push({4,4});
    q.push({2,7});
    q.push({3,6});
    while(!q.empty()) {
        pair<int, int> p = q.top();
        q.pop();
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}