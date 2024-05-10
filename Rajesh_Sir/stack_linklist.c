#include<stdio.h>
#include<stdlib.h>
struct node
{
    int j;
    struct node *p;
};
struct node* push(struct node*);
struct node* pop(struct node*);
void disp(struct node*);
int main()
{
    int n;
    struct node *head = NULL, *nn = NULL;
    RE:
    printf("\n1). To insert data into the node");
    printf("\n2). To delete data from the node");
    printf("\n3). Display data in the queue.");
    printf("\n4). Quit\n");
    scanf("%d",&n);
    if(head == NULL && (n == 2 || n == 3))
    {
        printf("\nQueue is empty.!!!\nFirst insert the data into queue.!!!\n");
        goto RE;
    }
    switch (n)
    {
    case 1:
        if(head == NULL)
        {
            head = push(head);
            nn = head;
        }
        else
            nn = push(nn);
        break;
    case 2:
        head = pop(head);
        break;
    case 3:
        printf("\nData of queue are.........\n");
        disp(head);
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
struct node* push(struct node *tmp)
{
    struct node *nn;
    nn = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data :: ");
    scanf("%d",&nn->j);
    if(tmp == NULL)
        nn->p = NULL;
    else
        nn->p = tmp;
    return nn;
}
struct node* pop(struct node *h)
{
    int n;
    struct node *tmp;
    tmp = h;
    n = h->j;
    h = h->p;
    tmp->p = NULL;
    free(tmp);
    printf("\n%d has been deleted Successfully.!!!\n",n);
    return h;
}
void disp(struct node *h)
{
    struct node *n = h;
    while(n != NULL)
    {
        printf("%d\t",n->j);
        n = n->p;
    }
    printf("\n");
}