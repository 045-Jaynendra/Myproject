#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> &v, int i, int s, int l) {
    int ans = 0;
    if (s % l == 0)
        ans = 1;
    if (i == v.size())
        return ans;
    return ans + fun(v, i + 1, s + v[i], l + 1);
}
int main() {
    string str;
    cin>>str;
    unordered_map<char, int> um = {{'a', 1}, {'b', 1}, {'c', 2}, {'d', 2}, {'e', 2}, {'f', 3}, {'g', 3}, {'h', 3}, {'i', 4}, {'j', 4}, 
                                   {'k', 4}, {'l', 5}, {'m', 5}, {'n', 5}, {'o', 6}, {'p', 6}, {'q', 6}, {'r', 7}, {'s', 7}, {'t', 7}, 
                                   {'u', 8}, {'v', 8}, {'w', 8}, {'x', 9}, {'y', 9}, {'z', 9}};
    vector<int> vec;
    for (int i = 0; i < str.size(); i++)
        vec.push_back(um[str[i]]);
    int ans = 0;
    for (int i = 0; i < vec.size(); i++)
        ans += fun(vec, i + 1, vec[i], 1);
    cout<<ans<<endl;
    return 0;
}