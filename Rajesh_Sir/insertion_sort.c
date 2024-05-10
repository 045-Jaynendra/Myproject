#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, a, *arr, tmp;
    printf("\nHow many element you want to sort :: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    printf("\nEnter data..........\n");
    for(i = 0; i < n; i++)
    {
        printf("> ");
        scanf("%d",&arr[i]);
    }
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
    printf("\n\n");
    return 0;
}