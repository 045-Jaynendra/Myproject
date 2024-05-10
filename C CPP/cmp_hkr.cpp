#include <iostream>
using namespace std;
int main()
{
    int arr1[3], arr2[3], arr3[2] = {0, 0};
    for (int i = 0; i < 3; i++)
        cin >> arr1[i];
    for (int i = 0; i < 3; i++)
        cin >> arr2[i];
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i] > arr2[i])
            arr3[0]++;
        else if (arr1[i] < arr2[i])
            arr3[1]++;
    }
    for (int i = 0; i < 2; i++)
        cout << arr3[i] << " ";
    return 0;
}