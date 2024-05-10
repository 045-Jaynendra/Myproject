#include<stdio.h>
#include<stdlib.h>
int push(int *, int);
int pop(int *, int);
void disp(int *, int);
int main()
{
    int n, i, j, *arr, top = -1;
    printf("\nEnter size of stack :: ");
    scanf("%d",&i);
    arr = (int*)malloc(i*sizeof(int));
    RE:
    printf("\n1). To insert data into the node");
    printf("\n2). To delete data from the node");
    printf("\n3). Display data in the stack.");
    printf("\n4). Quit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        if(top == i-1)
        {
            printf("\nStack is full.!!!\nNo data can be inserted\n");
            goto RE;
        }
        top = push(arr, top);
        break;
    case 2:
        if(top == -1)
        {
            printf("\nNo data in the stack.!!!\n");
            goto RE;
        }
        top = pop(arr, top);
        break;
    case 3:
        if(top == -1)
        {
            printf("\nNo data in the stack.!!!\n");
            goto RE;
        }
        printf("\nData of stack are.........\n");
        disp(arr, top);
        break;    
    case 4:
        return 0;
    default:
        printf("\nInvalid Input.!!!");
        break;
    }
    goto RE;
    return 0;
}
int push(int *arr, int i)
{
    int n;
    i++;
    printf("\nEnter data :: ");
    scanf("%d",&arr[i]);
    return i;
}
int pop(int *arr, int i)
{
    int del_ele;
    del_ele = arr[i];
    printf("\n%d has been deleted Successfully.!!!",del_ele);
    arr[i] = '\0';
    i--;
    return i;
}
void disp(int *arr, int i)
{
    while(i != -1)
    {
        printf("%d\t",arr[i]);
        i--;
    }
}