#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>>& mat) {
    if(i == mat.size() || j == mat.size() || mat[i][j] == -1)
        return 0;
    mat[i][j] = 0;
    int a = solve(i + 1, j, mat);
    int b = solve(i, j + 1, mat);
    
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    solve(0, 0, mat);
    return 0;
}