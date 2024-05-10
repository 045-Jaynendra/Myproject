#include<bits/stdc++.h>
using namespace std;
vector<int> getkthsmallestTerm(vector<int> arr, long k) 
{
    set<int> s;
    for (auto x:arr)
    {
        s.insert(x);
    }
    vector<int> ar;
    for (auto x:s)
    {
        ar.push_back(x);
    }
    sort(ar.begin(), ar.end());
    long tmp = k;
    long i = k / ar.size();
    long j = k % ar.size();
    if(j == 0) {
        i--;
        j=ar.size();
    }
    return {ar[i], ar[j-1]};
}
int main()
{
    vector<int> arr={2, 2, 1};
    long k = 5;
    vector<int> res = getkthsmallestTerm(arr, k);
    cout<< res[0]<<" "<<res[1];
    return 0;
}