#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<int> v(n, 0);
        for(int i = 0; i < n; ++i)
            cin>>v[i];
        
        int minn = INT_MAX, ans = INT_MAX;
        for(int i = 0; i <= n - m; i++) {
            minn = min(minn, v[i]);
            ans = min(ans, minn * v[i + m - 1]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}