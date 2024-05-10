#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, *arr1, *arr2, n, m, i, j, tmp;
    printf("\nHow many data you want to insert in the First array :: ");
    scanf("%d",&m);
    arr1 = (int*)malloc(m * sizeof(int));
    for(i = 0; i < m; i++)
    {
        printf("> ");
        scanf("%d",&arr1[i]);
    }
    printf("\nHow many data you want to insert in the Second array :: ");
    scanf("%d",&n);
    arr2 = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("> ");
        scanf("%d",&arr2[i]);
    }
    arr = (int*)malloc((m + n) * sizeof(int));
    for(i = 0; i < (m + n); i++)
    {
        if(i < m)
            arr[i] = arr1[i];
        else
            arr[i] = arr2[i - m];
    }
    printf("\n\nBefore Sorting ..........................\n");
    for(i = 0; i < (m + n); i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i = 0; i < ((m + n) - 1); i++)
    {
        for(j = i; j < (m + n); j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("\n\nAfter Swapping...........................\n");
    for(i = 0; i < (m + n); i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
