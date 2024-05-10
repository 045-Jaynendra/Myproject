#include<stdio.h>
#include<stdlib.h>
void sort(int*, int);
int bin_search(int*, int, int, int);
int main()
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
    re:
    printf("\n\nSearch the element :: ");
    scanf("%d", &a);
    j = bin_search(arr, 0, n, a);
    if(j == -1)
        printf("\nElement not found");
    else
        printf("\nElement is :: %d",arr[j]);
    printf("\nIf want to run again, Press Y :: ");
    char ch;
    fflush(stdin);
    scanf("%c",&ch);
    if(ch == 'Y' || ch == 'y')
        goto re;
    return 0;
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
int bin_search(int *arr, int l, int h, int n)
{
    int tmp = (l + h) / 2;
    if(arr[tmp] == n)
        return tmp;
    else if(l == h)
        return -1;
    else if(arr[tmp] < n)
        bin_search(arr, tmp + 1, h, n);//l = tmp + 1;
    else if(arr[tmp] > n)
        bin_search(arr, l, tmp - 1, n);//h = tmp - 1;
}