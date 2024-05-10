#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> nums, int target)
    {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        int i = 0, j = v.size() - 1;
        while (i < j)
        {
            if (v[i] + v[j] == target)
                break;
            if (v[i] + v[j] > target)
                j--;
            else if (v[i] + v[j] < target)
                i++;
        }
        vector<int> res;
        if (v[i] == v[j])
        {
            auto in = find(nums.begin(), nums.end(), v[i]);
            res.push_back(distance(nums.begin(), in));
            nums.erase(in);
            auto jn = find(nums.begin(), nums.end(), v[j]);
            res.push_back((distance(nums.begin(), jn))+1);
        }
        else
        {
            auto in = find(nums.begin(), nums.end(), v[i]);
            auto jn = find(nums.begin(), nums.end(), v[j]);
            res.push_back(distance(nums.begin(), in));
            res.push_back(distance(nums.begin(), jn));
        }
        return res;
    }
};
int main()
{
    Solution ob;
    vector<int> num, res;
    int n, target;
    cout << "How many :: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        num.push_back(j);
    }
    cout << "\nTarget :: ";
    cin >> target;
    res = ob.twoSum(num, target);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}