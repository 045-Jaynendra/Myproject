#include<stdio.h>
#include<conio.h>
struct list
{
    int info;
    struct list *p;
};
void main()
{
    struct list n1,n2,n3,n4,n5;
    struct list *head;
    head = &n1;
    n1.info = 45;
    n1.p = &n2;
    n2.info = 74;
    n2.p = &n3;
    n3.info = 32;
    n3.p = &n4;
    n4.info = 97;
    n4.p = &n5;
    n5.info = 78;
    n5.p = NULL;
    /*printf("List are:......................\n");
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\t",head->info);
        head = head->p;
    }*/
    printf("\nList are:......................\n");
    //head = &n1;
    while(head != NULL)
    {
        printf("%d\t",head->info);
        head = head->p;
    }
}