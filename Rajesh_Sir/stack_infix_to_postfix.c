#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int push(char*, char, int);
char pop(char*, int);
int chk_priority(char);
int main()
{
    int n = 0, top = -1, a = 0, cp;
    char *str, *stack, *arr, tmp;
    printf("Enter the Infix Expression :: ");
    gets(str);
    n = strlen(str);
    stack = (char*)malloc(n*sizeof(char));
    arr = (char*)malloc(n*sizeof(char));
    while(str[n] != '\0')
    {
        if(str[n] == '(')
        {
            top = push(stack, str[n], top);
        }
        else if (str[n] == ')')
        {
            tmp = pop(stack, top);
        }
        else if (str[n] == '+' || str[n] == '-' || str[n] == '*' || str[n] == '/')
        {
            if(stack[top] == NULL)
                top = push(stack, str[n], top);
            else
            {
                if(chk_priority(stack[top]) == chk_priority(stack[top - 1]))
                {
                    
                }
            }
        }
        else
        {
            arr[a] = str[n];
            a++;
        }
        n++;
    }
    return 0;
}
int chk_priority(char ch)
{
    int n;
    if(ch == '+' || ch == '-')
        n = 1;
    else if(ch == '*' || ch == "/")
        n = 2;
    else if(ch == '^')
        n = 3;
    return n;
}
int push(char *stack, char ch, int top)
{
    top++;
    stack[top] = ch;
    return top;    
}
char pop(char *ch, int top)
{
    while(ch != '(')
    {
        
    }
}