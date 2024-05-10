#include <iostream>
using namespace std;
int main()
{
    bool t = false;
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if ((x1 < x2 && v1 > v2) || (x1 > x2 && v1 < v2))
    {
        for (int i = 0; i < 100; i++)
        {
            if(x1 == x2)
            {
                t = true;
                break;
            }
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
        if(t==true)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout << "NO";
    return 0;
}