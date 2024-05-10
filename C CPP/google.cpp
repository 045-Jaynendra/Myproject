#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxInstance(string s)
    {
        map<char, int> bln;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b' || s[i] == 'a' || s[i] == 'l' || s[i] == 'o' || s[i] == 'n')
            {
                bln[s[i]]++;
            }
        }
        int m1 = (bln['b'] < bln['a'] ? bln['b'] : bln['a']);
        int m = (m1 < bln['n'] ? m1 : bln['n']);
        int n = (bln['l'] < bln['o'] ? bln['l'] : bln['o']);
        int count = 0;
        cout << endl
             << m1 << " " << m << " " << n;
        while (m != 0 && n != 0)
        {
            m--;
            n -= 2;
            count++;
        }
        cout << "count :: " << count;
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.maxInstance(s) << endl;
    }
    return 0;
}