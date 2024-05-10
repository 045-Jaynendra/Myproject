#include<stdio.h>
#include<stdlib.h>
struct harsh
{
    int n;
    struct harsh *next;
};
struct harsh *h = NULL;
struct harsh* create(struct harsh*);
void disp();
int main()
{
    char ch;
    struct harsh *nod = NULL;
    re:
    printf("\nWould you want to create node? (Y/N) :: ");
    fflush(stdin);
    scanf("%c", &ch);
    if(ch == 'y' || ch == 'Y')
    {
        nod = create(nod);
        goto re;
    }
    if(h != NULL)
    {
        printf("\n\nData in linklist are........\n");
        disp();
    }
    else
        printf("No data in the linklist");
    return 0;
}
struct harsh* create(struct harsh *nod)
{
    struct harsh *k;
    k = (struct harsh *)malloc(sizeof(struct harsh));
    if(h == NULL)
    {
        h = nod = k;
    }
    else
    {
        nod->next = k;
        nod = k;
    }
    printf("> ");
    scanf("%d", &k->n);
    k->next = NULL;
    return nod;
}
void disp()
{
    struct harsh *tmp = h;
    while(tmp != NULL)
    {
        printf("%d\t",tmp->n);
        tmp = tmp->next;
    }
}