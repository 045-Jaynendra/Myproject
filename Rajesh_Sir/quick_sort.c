#include<stdio.h>
#include<stdlib.h>
void merge(int*, int);
void disp(int*, int);
int main()
{
    int *arr, n;
    printf("\nEnter size of array :: ");
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    printf("\nInput data in the array................\n");
    for (int i = 0; i < n; i++)
    {
        printf("> ");
        scanf("%d", &arr[i]);
    }
    printf("\nData before sorting are..........\n");
    disp(arr, n);
    merge(arr, n);
    return 0;
}
void merge(int *arr, int n)
{
    int i,low,high,pivot,ele,temp,pos;
    low = 0;
    high = n - 1;
    int a = 0;
    while(a == 0)
    {
        RE:
        pivot = (high + low)/2;
        ele = arr[pivot];
        for(i = high; i > pivot;  i--)
        {
            if(arr[pivot] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[pivot];
                arr[pivot] = temp;
                pivot = i;
                break;
            }  
        }
        for(i = low; i < pivot;  i++)
        {
            if(arr[pivot] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[pivot];
                arr[pivot] = temp;
                break;
            }  
        }
        pivot = i;
        if(ele != arr[pivot])
            goto RE;
        printf("%d\t",a);
        a++;
    }
    printf("\n\n");
    disp(arr, n);
}


void disp(int *arr, int n)
{
    for(int i = 0; i <n; i++)
        printf("%d\t",arr[i]);
}