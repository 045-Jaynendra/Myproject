//Asscending
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, d, *arr;
    printf("Enter size of an array :: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("\nProcessing...........\n\n");
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                d = arr[i];
                arr[i] = arr[j];
                arr[j] = d;
            }
            printf("\n");
            for(int k = 0; k < n; k++)
                printf("%d\t",arr[k]);
        }
        printf("\n\n");
    }
    printf("\nSorted data are..............\n");
    for(i = 0; i < n; i++)
        printf("%d\t",arr[i]);
    return 0;
}