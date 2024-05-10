#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<int> st1, st2, st3;
        int a = 0, b = 0, c = 0;
        int ans = 0;
        while(a != n || b != n || c!= n) {
            if((a < n && b < n && st1[a] <= st2[b]) && st1[a] <= st3[c]) {
                ans |= st1[a];
                a++;
            }
            else if(b < n && c < n && st2[b] <= st3[c]) {
                ans |= st2[b];
                b++;
            }
            else {
                ans |= st3[c];
                c++;
            }
        }
    }
    return 0;
}