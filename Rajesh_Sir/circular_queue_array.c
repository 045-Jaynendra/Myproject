#include<stdio.h>
#include<stdlib.h>
void insert_oq(int *, int, int);
int delete_oq(int *,int);
void disp_oq(int *, int);
int front = -1, rear = -1;
int main()
{
    int n, i, j, *arr,item;
    printf("\nEnter size of queue :: ");
    scanf("%d",&i);
    arr = (int*)malloc(i*sizeof(int));
    RE:
    printf("\n1). To insert data into the node");
    printf("\n2). To delete data from the node");
    printf("\n3). Display data in the queue.");
    printf("\n4). Quit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        if((rear == i-1 && front == 0) || (front == rear+1))
        {
            printf("\nStack is full.!!!\nNo data can be inserted\n");
            goto RE;
        }
        printf("\nEnter data :: ");
        scanf("%d",&item);
        insert_oq(arr, item, i-1);
        break;
    case 2:
        if(front == -1)
        {
            printf("\nNo data in the queue.!!!\n");
            goto RE;
        }
        item = delete_oq(arr, i-1);
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
void insert_oq(int *arr, int item, int n)
{
    if(front == -1)
        front++;
    if(rear == n)
        rear = 0;
    else
        rear++;
    arr[rear] = item;
}
int delete_oq(int *arr, int n)
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