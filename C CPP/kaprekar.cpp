#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool chk = false;
bool chk_kaprekar(int n)
{
    int j = n, d = 0;
    unsigned int n1 = 0, n2;
    unsigned long long int sq_n, t;
    while (j != 0)
    {
        j = j / 10;
        d++;
    }
    j = n;
    sq_n = (unsigned long long int)n * n;
    for (int i = 0; i < d; i++)
    {
        t = sq_n % 10;
        sq_n = sq_n / 10;
        n1 = n1 + t * pow(10, i);
    }
    if (n1 + sq_n == n)
        chk = true;
    return chk;
}
int main()
{
    bool n;
    int p, q;
    vector<int> j;
    cin >> p >> q;
    for (int i = p; i <= q; i++)
    {
        n = chk_kaprekar(i);
        if (n == true)
            j.push_back(i);
        chk = false;
    }
    if(j.size()==0)
        cout<<"INVALID RANGE";
    else
        for (int i = 0; i < j.size(); i++)
        {
            cout << j[i] << " ";
        }
    return 0;
}