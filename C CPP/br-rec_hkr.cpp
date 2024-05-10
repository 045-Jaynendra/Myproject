#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, j, min, max, MIC = 0, MAC = 0;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    min = max = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
            MIC++;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            MAC++;
        }
    }
    cout<<MAC<<" "<<MIC;
    return 0;
}