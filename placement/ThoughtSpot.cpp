#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(2, 0));
    for(int i=0; i<n; i++) {
        cin>>v[i][0]>>v[i][1];
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int maximum = 0;
        for (int j = i + 1; j < n; j++) {
            sum = abs(v[i].first - v[j].first)
                  + abs(v[i].second - v[j].second);
            maximum = max(maximum, sum);
        }
    }
    return 0;
}