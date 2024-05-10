#include <bits/stdc++.h>
using namespace std;
int cal_n(int n){
   int temp = 1;
   for (int i = 2; i <= n; i++)
      temp = temp * i;
   return temp;
}
int nCr(int n, int r){
   return cal_n(n) / (cal_n(r) * cal_n(n - r));
}
long solve(string A)
{
    vector<int> G, R;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 'G')
            G.push_back(i);
        else
            R.push_back(i);
    }
    // RRGG
    long final=0;
    for (long i = 1; i < R.size(); i++)
    {
        long pref;
        for (long j = 0; j < G.size() - 1; j++)
        {
            if(R[i] < G[j])
            {
                pref = G.size() - j;
                final += i * nCr(pref, 2);
                break;
            }
        }
    }
    // GGRR
    for (long i = 1; i < G.size(); i++)
    {
        long pref;
        for (long j = 0; j < R.size() - 1; j++)
        {
            if(G[i] < R[j])
            {
                pref = R.size() - j;
                final += i * nCr(pref, 2);
                break;
            }
        }
    }
    return final;
}
int main()
{
    string str;
    cin >> str;
    cout << "\nResult :: " << solve(str);
    return 0;
}