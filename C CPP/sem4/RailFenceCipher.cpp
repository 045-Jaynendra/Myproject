#include<bits/stdc++.h>
using namespace std;
string encrypted(string str, int key) {
    vector<string> v(key, "");
    int j = 0;
    bool flg = true;
    string encr = "";
    for (int i = 0; i < str.size(); i++) {
        v[j] += str[i];
        if(flg) j++;
        else j--;
        if(j == key) {
            flg = false;
            j -= 2;
        }
        if(j < 0) {
            flg = true;
            j += 2;
        }
    }
    for (int i = 0; i < key; i++) encr += v[i];
    return encr;
}
string decrypted(string encr, int key) {
    string decr = "";
    vector<int> v[key];
    int j = 0;
    bool flg = true;
    for(int i= 0 ; i < encr.size() ; i++) decr += '@';
    for (int i = 0; i < encr.size(); i++) {
        v[j].push_back(i);
        if(flg) j++;
        else j--;
        if(j == key) {
            flg = false;
            j -= 2;
        }
        if(j < 0) {
            flg = true;
            j += 2;
        }
    }
    return "";
}
int main() {
    string str;
    int key;
    cout << "Input :: ";
    getline(cin, str);
    cout<<"Key :: ";
    cin>>key;
    cout<<"Encrypted message :: "<<encrypted(str, key);
    return 0;
}