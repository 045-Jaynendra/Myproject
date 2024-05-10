#include <iostream>
using namespace std;
int main()
{
    int n, j;
    cin >> n; // 41
    if (n == 1918)
        j = 15;
    else if (n > 1918)
        if (((n % 400) == 0) || (((n % 4) == 0) && ((n % 100) != 0)))
            j = 29;
        else
            j = 28;
    else
    {
        if ((n % 4) == 0)
            j = 29;
        else
            j = 28;
    }
    cout << (41 - j) << ".0" << 9 << "." << n;
    return 0;
}