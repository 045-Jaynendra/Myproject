#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        int i = 0, j = 0;
        key.erase(remove(key.begin(), key.end(), ' '), key.end());
        string res = "";
        while (key[i++] != '\0')
            key.erase(remove(key.begin() + i, key.end(), key[i - 1]), key.end());
        while (message[j] != '\0')
        {
            if (message[j] == ' ')
                res += ' ';
            else
            {
                auto isFound = key.find(message[j]);
                res += (char)(isFound + 97);
            }
            j++;
        }
        return res;
    }
};
int main()
{
    string key, message;
    getline(cin, key);
    getline(cin, message);
    Solution ob;
    string str = ob.decodeMessage(key, message);
    cout << str;
    return 0;
}