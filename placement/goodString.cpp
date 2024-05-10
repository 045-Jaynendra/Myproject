#include<bits/stdc++.h>

using namespace std;
int main() {
    string good, str;
    cin>>good>>str;
    char pr = good[0];
    int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        int dis = abs(str[i] - pr);
        for(int j = 1; j < good.size(); j++) {
            if(dis > abs(str[i] - good[j])) {
                pr = good[j];
                if(i != 0)
                    dis = abs(str[i] - good[j]);
            }
            else if(dis == abs(str[i] - good[j]) && dis > abs(pr - good[j])) {
                pr = good[j];
            }
        }
        cout<<dis<<" ";
        ans += dis;
    }
    cout<<ans;
    return 0;
}