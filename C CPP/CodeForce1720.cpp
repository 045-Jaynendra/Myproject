#include <bits/stdc++.h>
using namespace std;
class sol
{
public:
    int solution(int a, int b, int c, int d)
    {
        if ((float)a / b == (float)c / d)
            return 0;
        else if (a == 0 || c == 0)
            return 1;
        else if (a == c || b == d)
            return 1;
        else if(a > c && b > d)
        {
            if (a > c && a % c == 0)
                return 1;
            else if (b > d && b % d == 0)
                return 1;
            else
                return 2;
        }
        else if((a > c) && (a % c == 0))
        {
            cout<<"hello";
            if (a > c && a % c == 0)
                return 1;
            else if (b > d && b % d == 0)
                return 1;
            else
                return 2;
        }
        else if((b > d) || (b < d))
        {
            cout<<"NDIA";
            if (a > c && a % c == 0)
                return 1;
            else if (b > d && b % d == 0)
                return 1;
            else
                return 2;
        }
        return 2;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sol ob;
        cout << ob.solution(a, b, c, d) << endl;
    }
    return 0;
}