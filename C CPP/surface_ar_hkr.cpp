#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int h, w, i, j, p = 0, s1, s2, s3, s4;
    cin >> h >> w;
    int arr[h][w];
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (i == 0 && j == 0)
                s1 = s2 = arr[i][j];
            else if (i == 0)
            {
                if (arr[i][j] > arr[i][j - 1])
                    s1 = arr[i][j] - arr[i][j - 1];
                else
                    s1 = 0;
                s2 = arr[i][j];
            }
            else if (j == 0)
            {
                s1 = arr[i][j];
                if (arr[i][j] > arr[i - 1][j])
                    s2 = arr[i][j] - arr[i - 1][j];
                else
                    s2 = 0;
            }
            else
            {
                if (arr[i][j] > arr[i][j - 1])
                    s1 = arr[i][j] - arr[i][j - 1];
                else
                    s1 = 0;
                if (arr[i][j] > arr[i - 1][j])
                    s2 = arr[i][j] - arr[i - 1][j];
                else
                    s2 = 0;
            }
            if (j < (w - 1))
            {
                if (arr[i][j] > arr[i][j + 1])
                    s3 = arr[i][j] - arr[i][j + 1];
                else
                    s3 = 0;
            }
            else
                s3 = arr[i][j];
            if (i < (h - 1))
            {
                if (arr[i][j] > arr[i + 1][j])
                    s4 = arr[i][j] - arr[i + 1][j];
                else
                    s4 = 0;
            }
            else
                s4 = arr[i][j];
            p = p + 2 + s1 + s2 + s3 + s4;
        }
    }
    cout << p;
    return 0;
}