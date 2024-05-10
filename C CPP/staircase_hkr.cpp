#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, d = n;
    for (i = 0; i < n; i++, d--)
    {
        int a = d-1;
        while (a != 0)
        {
            cout << " ";
            a--;
        }
        for (j = d-1; j < n; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
