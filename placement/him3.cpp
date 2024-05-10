#include <bits/stdc++.h>

using namespace std;

struct Point
{

    int x, y;
};

// Returns Total Area of two overlap

// rectangles

int main()

{

    cin string arr[][];

    // Area of 1st Rectangle

    float area1 = abs(arr[0].x - arr[2].x)

                  * abs(arr[1].y - arr[3].y);

    // Area of 2nd Rectangle

    float area2 = abs(arr[4].x - arr[6].x)

                  * abs(arr[5].y - arr[7].y);

    // Length of intersecting part i.e

    // start from max(l1.x, l2.x) of

    // x-coordinate and end at min(r1.x,

    // r2.x) x-coordinate by subtracting

    // start from end we get required

    // lengths

    int x_dist = min(arr[2].x, arr[6].x)

                 - max(arr[0].x, arr[4].x);

    int y_dist = (min(arr[3].y, arr[7].y)

                  - max(arr[1].y, arr[5].y));

    int areaI = 0;

    if (x_dist > 0 && y_dist > 0)

    {

        areaI = x_dist * y_dist;
    }

    float overlapAr = (area1 + area2 - areaI);

    // return no of times overlapped area fit in first rectangle.

    return area1 / overlapAr;
}