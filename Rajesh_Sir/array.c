#include<stdio.h>
int main()
{
    int *arr;
    int n;
    printf("How many data you want to enter :: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEntered no. are.......\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}