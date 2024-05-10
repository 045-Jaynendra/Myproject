#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    string s1, s2;
    bool flg = 0;
    for (int i = 0; i < str.size(); i++) {
        if(str[i] == ' ')
            flg = 1;
        else if(flg)
            s2 += str[i];
        else
            s1 += str[i];
    }
    cout<<s1.size()<<":"<<s2.size()<<endl;
    int j = 0;
    for(int i = 0; i < s1.size(); i++) {
        cout<<i<<" "<<j<<" : ";
        if(s1[i] == '+') {
            if(j >= s2.size()) {
                cout<<"false1";
                return 0;
            }
        }
        if(s1[i] == '$') {
            if(s2[j] < 49 || s2[j] > 57) {
                cout<<"false2";
                return 0;
            }
        }
        if(s1[i] == '*') {
            if(i + 1 < s1.size() && s1[i + 1] == '{') {
                i++;
                int x = s1[++i] - 48;
                i++;
                char ch = s2[j];
                cout<<x<<" "<<ch<<" "<<j<<endl;
                while(x--) {
                    if(j == s2.size()) {
                        cout<<"false3";
                        return 0;
                    }
                    if(ch != s2[j]) {
                        cout<<"false4";
                        return 0;
                    }
                    j++;
                }
                j--;
            }
            else {
                if(j + 2 >= s2.size()) {
                    cout<<"false5";
                    return 0;
                }
                if(s2[j] != s2[j + 1] || s2[j] != s2[j + 2]) {
                    cout<<"false6";
                    return 0;
                }
                j += 2;
            }
        }
        j++;
        cout<<i + 1<<" "<<j<<endl;
    }
    cout<<j;
    if(j < s2.size()) {
        cout<<"false7";
        return 0;
    }
    cout<<"true";
    return 0;
}