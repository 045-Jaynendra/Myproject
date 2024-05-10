#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int n, vector<int>& A) {
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        if(A[i] >= 0) {
            ans.push_back(1);
            continue;
        }
    }
}
int main() {
    int n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }
    vector<int> ans = solve(n, v);
    for(int i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}