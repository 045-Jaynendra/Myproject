//Asscending
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, a, d, *arr;
    printf("Enter size of an array :: ");
    scanf("%d",&n);
    a = n;
    arr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("\nProcessing...........\n\n");
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < a-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                d = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = d;
            }
            printf("\n");
            for(int k = 0; k < n; k++)
                printf("%d\t",arr[k]);
        }
        printf("\n\n");
        a--;
    }
    printf("\nSorted data are..............\n");
    for(i = 0; i < n; i++)
        printf("%d\t",arr[i]);
    return 0;
}