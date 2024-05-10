#include<stdio.h>
#include<stdlib.h>
struct ll
{
    char data;
    struct ll *prev;
    struct ll *next;
};
struct ll *head=NULL;
int main()
{
    struct ll *nn,*tmp;
    int n,j,i=0,a=0;
    char c,ch;
    char str[50];
    head = NULL;
    RE:
    fflush(stdin);
    printf("\n\nYou can start typing...........\n");
    gets(str);
    do
    {
        nn=(struct ll *)malloc(sizeof(struct ll));
        if(nn == NULL)
        {
            printf("Node cannot be created.\n\nTerminated!!!");
        }
        if(head == NULL)
        {
            nn->data = str[i];
            head = tmp = nn;
            nn->prev = NULL;
            nn->next = NULL;
        }
        else
        {
            nn->data = str[i];
            nn->prev = tmp;
            tmp->next = nn;
            nn->next = NULL;
            tmp = nn;
        }
        i++;
    }while(str[i] != '\0');
    i=0;
    nn = tmp = head;
    printf("\n");
    do
    {
        i++;
        if(nn->data == '1' || nn->data == '2')
        {
            struct ll *temp = nn->prev;
            while(nn->data == '1' || nn->data == '2')
            {
                if(nn->data == '1' && i > n)
                    n++;
                if (n > 0 && nn->data == '2')
                    n--;
                if(nn->next == NULL)
                    break;
                nn = nn->next;
            }
            if(head->data == '1' || head->data == '2')
            {
                head = nn;
                if(nn->next == NULL)
                {
                    printf("\nProcessing input file\n");
                    return 0;
                }
                break;
            }
            for(int d = 0; d < n; d++)
            {
                if(tmp->prev != NULL)
                    tmp = tmp->prev;
            }
            tmp->next = nn;
            nn->prev = tmp;
            n=0;
        }
        tmp = nn;
        nn = nn->next;
    }while(nn != NULL);
    if((tmp->next == NULL) && (tmp->data == '1' || tmp->data == '2'))
    {
        tmp = tmp->prev;
        tmp->next = NULL;
    }
    nn = head;
    printf("\nProcessing input file\n\n");
    while(nn != NULL)
    {
        printf("%c",nn->data);
        nn = nn->next;
    }
    printf("\n\n");
    return 0;
}