#include<stdio.h>
#include<stdlib.h>
void insert_de_f(int *, int, int);
void insert_de_r(int *, int, int);
int delete_de_f(int *,int);
int delete_de_r(int *,int);
void disp_oq(int *, int);
int front = -1, rear = -1;
int main()
{
    int n, i, j, a, *arr,item;
    printf("\nEnter size of queue :: ");
    scanf("%d",&i);
    arr = (int*)malloc(i*sizeof(int));
    RE:
    printf("\n1). To insert data into the node");
    printf("\n2). To delete data from the node");
    printf("\n3). Display data in the queue.");
    printf("\n4). Quit\n>");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        if((rear == i-1 && front == 0) || (front == rear+1))
        {
            printf("\nStack is full.!!!\nNo data can be inserted\n");
            goto RE;
        }
        printf("\n1. Insert from front.");
        printf("\n2. Insert from rear.\n>");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("\nEnter data :: ");
            scanf("%d",&item);
            insert_de_f(arr, item, i-1);
            break;
        case 2:
            printf("\nEnter data :: ");
            scanf("%d",&item);
            insert_de_r(arr, item, i-1);
            break;
        default:
            printf("\nInvalid Input.!!!");
            break;
        }
        break;
    case 2:
        if(front == -1)
        {
            printf("\nNo data in the queue.!!!\n");
            goto RE;
        }
        printf("\n1. Delete from front.");
        printf("\n2. Delete from rear.\n>");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            item = delete_de_f(arr, i-1);
            break;
        case 2:
            item = delete_de_r(arr, i-1);
            break;
        default:
            printf("\nInvalid Input.!!!");
            break;
        }
        printf("\n%d has been deleted Successfully.!!!\n",item);
        break;
    case 3:
        if(front == -1)
        {
            printf("\nNo data in the queue.!!!\n");
            goto RE;
        }
        printf("\nData of queue are.........\n");
        disp_oq(arr, i-1);
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
void insert_de_f(int *arr, int item, int n)
{
    if(front == -1)
        front++;
    if(front == 0)
        front = n;
    else
        front--;
    arr[front] = item;
}
void insert_de_r(int *arr, int item, int n)
{
    if(front == -1)
        front++;
    if(rear == n)
        rear = 0;
    else
        rear++;
    arr[rear] = item;
}
int delete_de_f(int *arr, int n)
{
    int del_ele;
    del_ele = arr[front];
    arr[front] = '\0';
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
      if (front == n)
        front = 0;
      else
        front++;
    }
    return del_ele;
}
int delete_de_r(int *arr, int n)
{
    int del_ele;
    del_ele = arr[rear];
    arr[rear] = '\0';
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
      if (rear == n)
        rear = 0;
      else
        rear--;
    }
    return del_ele;
}
void disp_oq(int *arr, int n)
{
    
    if(front > rear)
    {
        for(int i = front; i <= n; i++)
        {
            printf("%d\t",arr[i]);
        }
        for(int i = 0; i <= rear; i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
}