#include <iostream>
using namespace std;
int main()
{
    int p, d, m, s, n = 0, sum = 0, tmp, cnt = 0;
    cin >> p >> d >> m >> s;
    while (sum < s)
    {
        p = p - n;
        if (p >= m)
            sum += p;
        else
            sum += m;
        if(sum > s)
            break;
        cnt++;
        n = d;
    }
    cout << cnt;
    return 0;
}