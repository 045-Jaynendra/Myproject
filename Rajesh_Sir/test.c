#include<stdio.h>
int main()
{
        int arr1[5], *arr2[5];
        for(int i = 0; i < 5; i++)
        {
                printf("> ");
                scanf("%d",&arr1[i]);
                arr2[i] = &arr1[i];
        }
        printf("\n\n");
        for(int i = 0; i < 5; i++)
                printf("%d\t",arr2[i]);
}