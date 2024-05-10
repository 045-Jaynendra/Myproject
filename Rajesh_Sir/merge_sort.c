#include<stdio.h>
#include<stdlib.h>
void merge(int*, int, int);
void disp(int*, int);
int main()
{
    int n, j, *arr;
    printf("Size of array you want to create :: ");
    scanf("%d", &n);
    arr = (int*)calloc(n,sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    merge(arr, 0, n);
    disp(arr, n);
    return 0;
}
void merge(int *arr, int l, int h)
{
    int i, j;
    int temp = (h + l) / 2;
    int *arr1, *arr2, tmp_arr = 0, *arr3;
    if(h % 2 != 0)
        tmp_arr = arr[h - 1];
    arr1 = (int*)calloc(temp, sizeof(int));
    arr2 = (int*)calloc(temp, sizeof(int));
    for(i = 0; i < temp; i++)
    {
        arr1[i] = arr[i];
    }
    for(j = 0; j < temp; j++)
    {
        arr2[j] = arr[i + j];
    }
    disp(arr1, temp);
    disp(arr2, temp);
    if(temp != 1)
    {
        merge(arr1, l, temp);
        printf("Hello\n");
    }
    else
    {
        printf("India\n");
        int x = 0, y = 0, j;
        arr3 = (int*)calloc(2 * temp, sizeof(int));
        for(j = 0; j < (2 * temp); j++)
        {
            if(arr1[x] > arr2[y])
            {
                arr3[j] = arr2[y];
                y++;
                printf("%d  ||  ",arr3[j]);
            }
            else if(arr1[x] < arr2[y])
            {
                arr3[j] = arr2[x];
                x++;
                printf("%d  ||  ",arr3[j]);
            }
        }
        if(tmp_arr != 0)
            arr3[j++] == tmp_arr;
        printf("\n=> ");
        disp(arr3, j);
    }
    if(temp != 1)
    {
        merge(arr2, l, temp);
    }
    else
    {
        int x = 0, y = 0, j;
        arr3 = (int*)calloc(2 * temp, sizeof(int));
        for(j = 0; j < (2 * temp); j++)
        {
            if(arr1[x] > arr2[y])
            {
                arr3[j] = arr2[y];
                y++;
            }
            else if(arr1[x] < arr2[y])
            {
                arr3[j] = arr2[x];
                x++;
            }
        }
        if(tmp_arr != 0)
            arr3[j] == tmp_arr;
        printf("=> ");
        disp(arr3, j + 1);
    }
}
void disp(int *arr, int h)
{
    for(int i = 0; i < h; i++)
        printf("%d\t",arr[i]);
    printf("\n");
}