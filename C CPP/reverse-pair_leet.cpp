#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reversePairs(vector<int> &nums)
    {
        int max = *max_element(nums.begin(), nums.end());
        int count = 0;
        for (int i = nums.size() - 1; (i > 0) && ((nums[i] * 2) < max); i--)
            for (int j = i - 1; j >= 0; j--)
                if (nums[j] > 2 * nums[i])
                    count++;
        return count;
    }
};
int main()
{
    Solution ob;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int j = ob.reversePairs(v);
    cout << j << endl;
    return 0;
}