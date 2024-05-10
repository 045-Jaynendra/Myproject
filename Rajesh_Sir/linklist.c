#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node* create(struct node *l, int n);
int insert(int n);
void insertathead();
int delete(int n);
void disp();

int main()
{
    int n, j, k = 0, i = 0;
    char ch;
    head = NULL;
    struct node *nn;
    RE:
    printf("\n*****************************************");
    printf("\n*****************************************");
    printf("\n**         Select your choice          **");
    printf("\n*****************************************");
    printf("\n**   1). Create node                   **");
    printf("\n**   2). Insert node                   **");
    printf("\n**   3). Delete a node                 **");
    printf("\n**   4). Display                       **");
    printf("\n**   5). Quit                          **");
    printf("\n*****************************************");
    printf("\n*****************************************\n\n");
    printf("\nEnter your choice :: ");
    scanf("%d",&n);
    if(head == NULL && n > 1 && n <= 4 && k == 0)
    {
        if(n == 5)
            return 0;
        printf("\n********************************************************");
        printf("\n**  First create node to performing any operation!!!  **");
        printf("\n********************************************************\n\n");
        goto RE;
    }
    else if(head == NULL && n != 1 && k == 2)
    {
        printf("\n************************************************************");
        printf("\n**  All the node of linklist has been already deleted!!!  **");
        printf("\n**  First create the node for further operation!!!        **");
        printf("\n************************************************************\n\n");
        goto RE;
    }
    if(n == 1 && k == 1)
    {
        printf("\n**********************************");
        printf("\n**  You have already a node!!!  **");
        printf("\n**********************************\n\n");
        goto RE;
    }
    switch (n)
    {
    case 1:
        k = 1;
        printf("\nHow many node you want to create :: ");
        scanf("%d",&n);
        nn = create(head, n);
        break;
    case 2:
        printf("\n***********************************************************");
        printf("\n***********************************************************");
        printf("\n**                 Select your choice!!!                 **");
        printf("\n***********************************************************");
        printf("\n**  1). To inserting node at the begining of Linklist    **");
        printf("\n**  2). To inserting node after any node                 **");
        printf("\n***********************************************************");
        printf("\n***********************************************************\n\n");
        RECH:
        printf("\nEnter your choice :: ");
        scanf("%d",&n);
        if(n == 1)
        {
            insertathead();
            break;
        }
        else if(n == 2)
        {
            REINS:
            printf("\nAfter which you want to inserting a node :: ");
            scanf("%d",&n);
            i = insert(n);
            if(i == 0)
                goto REINS;
            if(i == 1)
                printf("\nNode inserted successfully!!!");
            break;
        }
        else
        {
            printf("\n*******************************");
            printf("\n**     Invalid Input.!!!     **");
            printf("\n*******************************\n\n");
            goto RECH;
        }
    case 3:
        printf("\nWhich element would you want to delete :: ");
        scanf("%d",&n);
        k = delete(n);
        break;
    case 4:
        disp();
        break;
    case 5:
        return 0;
    default:
        printf("\n*******************************");
        printf("\n**     Invalid Input.!!!     **");
        printf("\n*******************************\n\n");
        break;
    }
    printf("\n\n");
    goto RE;
    return 0;
}

struct node *create(struct node *l, int n)
{
    struct node *nn, *tmp;
    for(int i = 0; i < n; i++)
    {
        nn = (struct node*)malloc(sizeof(struct node));
        printf("Enter data :: ");
        scanf("%d",&nn->data);
        if(i == 0)
            tmp = l;
        if (l == NULL)
        {
            head = tmp = l = nn;
            head->next = NULL;
        }
        else
        {
            tmp->next = nn;
            tmp = nn;
            nn->next = NULL;
        }
    }
    return nn;
}

void insertathead()
{
    int n;
    printf("\nHow many node would you want to insert at before begining of node :: ");
    scanf("%d",&n);
    struct node *nn, *tmp, *t = head;
    for(int i = 0; i < n; i++)
    {
        nn = (struct node*)malloc(sizeof(struct node));
        printf("Enter data :: ");
        scanf("%d",&nn->data);
        if (i == 0)
        {
            head = tmp = nn;
            head->next = t;
        }
        else
        {
            tmp->next = nn;
            tmp = nn;
            nn->next = t;
        }
    }
}

int insert(int i)
{
    int n;
    struct node *nn = head, *tmp;
    while(nn->data != i)
    {
        if(nn->next->data == i)
        {
            nn = nn->next;
            tmp = nn->next;
            break;
        }
        nn = nn->next;
        if(nn->next == NULL)
        {
            printf("\nNo any value %d found in the node.!!!\n\n",i);
            printf("\nData in the node are........................\n");
            disp();
            printf("\n\nPlease enter valid data after which you want to inserting node.!!!\n");
            return 0;
        }
    }
    printf("\nHow many node you want to insert after %d :: ",i);
    scanf("%d",&n);
    nn = create(nn, n);
    nn->next = tmp;
    return 1;
}

int delete(int n)
{
    struct node *nn = head;
    if(head->data == n)
    {
        head = head->next;
        printf("\n%d has been deleted successfully!!!",n);
        return 2;
    }
    if(head->next == NULL)
    {
        printf("\n%d not fount in the link list!!!",n);
        return 1;
    }
    while(nn != NULL)
    {
        if(nn->next->data == n || (nn->next == NULL && nn->data == n))
        {
            nn->next = nn->next->next;
            printf("\n%d has been deleted successfully!!!",n);
            return 1;
        }
        if(nn->next != NULL && nn->next->next != NULL)
            nn = nn->next;
        else
            break;
    }
    printf("\n%d not fount in the link list!!!",n);
    return 1;
}

void disp()
{
    struct node *nn = head;
    while(nn != NULL)
    {
        printf("%d\t",nn->data);
        nn = nn->next;
    }
}