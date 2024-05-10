#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s1 = "MEOW", s2 = "meow";
    while(n--) {
        int t, j = 0;
        string str;
        cin>>t;
        fflush(stdin);
        getline(cin, str);
        if(str.size() < 4 || !(str[0] == 'M' || str[0] == 'm')) cout<<"NO";
        else {
        for(int i = 0; i < str.size(); i++) {
            if(str[i] != s1[j] && str[i] != s2[j]) {
                j++;
                if(j == s1.size()) {
                    cout<<"NO";
                    break;
                }
                if(str[i] != s1[j] && str[i] != s2[j]) {
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(j == s1.size() - 1) cout<<"YES"<<endl;
        }
    }
    return 0;
}