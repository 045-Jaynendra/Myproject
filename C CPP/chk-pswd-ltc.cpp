#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool strongPasswordCheckerII(string password)
    {
        int i;
        if(password.size()<8)
            return false;
        i = 0;
        while(i < password.size())
        {
            if ((int)password[i] >= 97 && (int)password[i] <= 122)
                break;
            i++;
        }
        if (i == password.size())
            return false;
        i = 0;
        while(i < password.size())
        {
            if ((int)password[i] >= 65 && (int)password[i] <= 90)
                break;
            i++;
        }
        if (i == password.size())
            return false;
        i = 0;
        while(i < password.size())
        {
            if ((int)password[i] >= 48 && (int)password[i] <= 57)
                break;
            i++;
        }
        if (i == password.size())
            return false;
        //!@#$%^&*()-+
        i = 0;
        while(i < password.size())
        {
            if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+')
                break;
            i++;
        }
        if (i == password.size())
            return false;
        i = 0;
        while(i < password.size())
        {
            if (password[i] == password[i + 1])
            {
                return false;
            }
            i++;
        }
        return true;
    }
};
int main()
{
    system("cls");
    Solution ob;
    string str;
    cin >> str;
    bool chk = ob.strongPasswordCheckerII(str);
    if (chk)
        cout << "Password is Strong.!";
    else
        cout << "Password is not Strong.!";
    return 0;
}