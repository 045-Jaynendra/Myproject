#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} node;
struct node *nd;
void new()
{
    char ch;
    struct node *newnode,*temp;
    nd=NULL;
    do
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data :: ");
        scanf("%d",&newnode->data);
        if(nd==NULL)
        {   
            nd=temp=newnode;
            newnode=NULL;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            newnode=NULL;
        }
        fflush(stdin);
        printf("If you want to enter an another vakue into linklist. Press Y\t");
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
}
void disp()
{
    struct node *newnode=nd;

    //newnode=nd;
    while(newnode!=NULL)
    {
        printf("%d",newnode->data);
        newnode=newnode->next;
    }
}
int main()
{
    new();
    disp();
    return 0;
}