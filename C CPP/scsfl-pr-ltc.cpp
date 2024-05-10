#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> result;
        for (int i = 0; i < spells.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < potions.size(); j++)
            {
                if(spells[i]*potions[j]>=success)
                    count++;
            }
            result.push_back(count);
        }
        return result;
    }
};
int main()
{
    system("cls");
    Solution ob;
    vector<int> spells, position;
    long long success;
    int x, y;
    cout << "Spells :: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        spells.push_back(n);
    }
    cout << "Position :: ";
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int n;
        cin >> n;
        position.push_back(n);
    }
    cout << "Success :: ";
    cin >> success;
    vector<int> result = ob.successfulPairs(spells, position, success);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}