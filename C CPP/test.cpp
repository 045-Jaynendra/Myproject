#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{2,4,3,1,5},{6,3,5,1,2},{1,4,2,7,4,3},{0,4,7,4,3},{3,5,3,2,6},{4,2,5,3,8}};
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
	cout<<"\n\n";
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}