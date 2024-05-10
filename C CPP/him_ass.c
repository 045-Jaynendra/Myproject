#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
void sort(int *arr, int n)
{
    int i, j, a, tmp;
    printf("\n\nElements are not in sorted order");
    for(i = 1; i < n; i++)
    {
        a = i;
        for(j = (i - 1); j >= 0; j--)
        {
            if(arr[a] < arr[j])
            {
                tmp = arr[a];
                arr[a] = arr[j];
                arr[j] = tmp;
                a--;
            }
            else
                break;
        }
    }
    printf("\n\nSorted elements are as..............\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main(void)
{

    int n, i, j, a, *arr, flag = 0;
    printf("How many element you want to enter :: ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("> ");
        scanf("%d", &arr[i]);
        if(i != 0 && arr[i] < arr[i - 1])
            flag = 1;
    }
    if(flag == 1)
    {
        sort(arr, n);
    }
    flag = 0;
    printf("B =  ");
    int x;
    scanf("%d", &x);
    int result = binarySearch(a, x, 0, n - 1);
    if (result == -1)
        printf("\n[-1 ,-1]");
    else
        printf("\n[%d , %d]", result,( result+1));
    return 0;
}