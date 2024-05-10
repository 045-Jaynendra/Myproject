#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], arr1[3] = {0, 0, 0};
    double d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            arr1[0]++;
        else if (arr[i] < 0)
            arr1[1]++;
        else if (arr[i] == 0)
            arr1[2]++;
    }
    for (int i = 0; i < 3; i++)
    {
        d = (double)arr1[i] / n;
        cout << setprecision(6) << d << endl;
    }
    return 0;
}