#include<bits/stdc++.h>
using namespace std;
string fun(int i, string s) {
    string ans = "";
    for(int j = 0; j <= i; j++) {
        ans += s;
    }
    return ans;
}
string getPhoneNumber(string st) {
    stringstream str(st);
    string s;
    string ans = "";
    int i = 0;
    while(getline(str, s, ' ')) {
        if(s == "double") {
            i = 1;
        }
        else if(s == "triple") {
            i = 2;
        }
        else if(s == "zero") {
            ans += fun(i, "0");
            i = 0;
        }
        else if(s == "one") {
            ans += fun(i, "1");
            i = 0;
        }
        else if(s == "two") {
            ans += fun(i, "2");
            i = 0;
        }
        else if(s == "three") {
            ans += fun(i, "3");
            i = 0;
        }
        else if(s == "four") {
            ans += fun(i, "4");
            i = 0;
        }
        else if(s == "five") {
            ans += fun(i, "5");
            i = 0;
        }
        else if(s == "six") {
            ans += fun(i, "6");
            i = 0;
        }
        else if(s == "seven") {
            ans += fun(i, "7");
            i = 0;
        }
        else if(s == "eight") {
            ans += fun(i, "8");
            i = 0;
        }
        else if(s == "nine") {
            ans += fun(i, "9");
            i = 0;
        }
    }
    return ans;
}
int main() {
    string st;
    getline(cin, st);
    cout<<getPhoneNumber(st)<<endl;
    return 0;
}