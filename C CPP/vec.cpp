#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> v = {{5, 6, 2, 1},
                      {3, 14, 5, 60},
                      {11, 2, 1, 4},
                      {9, 11, 7, 6}};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}