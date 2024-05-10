#include<stdio.h>
#include<ctype.h>
#define size 5
int stack[size],top=-1;
void push(int n);
int pop();
int main()
{
    char st[20];
    int i,n;
    printf("Enter an expression :: ");
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        if(isalpha(st[i]));
        {
            printf("Enter value %d :: ",(i+1));
            scanf("%d",&n);
            push(n);
        }
    }
}