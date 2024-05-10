#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(char*, char, int);
char pop(char*, int);
int chk_priority(char);
void disp(char*);
int main()
{
    int n = 0, top = -1, a = 0, cp, x = 0, temp = 0, ch = 0, al = 0;
    char str[40], stack[40], arr[40], tmp, *stk;
    printf("\nEnter the Infix Expression :: ");
    gets(str);
    if(!((str[x] >= 65 && str[x] <= 90) || (str[x] >= 97 && str[x] <= 122) || (str[x] >= 0 && str[x] <= 9)))
    {
        printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
        return 0;
    }
    while(str[x] != '\0')
    {
        if(str[x] == '(')
            temp++;
        else if(str[x] == ')')
            temp--;
        else if(temp < 0)
        {
            printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
            return 0;
        }
        else if((str[x] >= 65 && str[x] <= 90) || (str[x] >= 97 && str[x] <= 122) || (str[x] >= 0 && str[x] <= 9))
        {
            if(str[x + 1] != '\0')
            if((str[x + 1] >= 65 && str[x + 1] <= 90) || (str[x + 1] >= 97 && str[x + 1] <= 122) || (str[x] >= 0 && str[x] <= 9))
            {
                printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
                return 0;
            }
        }
        else if(str[x] == '+' || str[x] == '-' || str[x] == '*' || str[x] == '/' || str[x] == '^' || str[x] == '%')
        {
            if(str[x + 1] != '\0')
            if(str[x + 1] == '+' || str[x + 1] == '-' || str[x + 1] == '*' || str[x + 1] == '/' || str[x + 1] == '^' || str[x + 1] == '%')
            {
                printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
                return 0;
            }
        }
        else
        {
            printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
            return 0;
        }
        x++;
    }
    if(!((str[x - 1] >= 65 && str[x - 1] <= 90) || (str[x - 1] >= 97 && str[x - 1] <= 122) || (str[x] >= 0 && str[x] <= 9)))
    {
        printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
        return 0;
    }
    if(temp != 0)
    {
        printf("You have entered Invalid Expression.!!!\nPlease Enter valid Infix expression.!!!\n");
        return 0;
    }
    while(str[n] != '\0')
    {
        if(str[n] == '+' || str[n] == '-' || str[n] == '*' || str[n] == '/' || str[n] == '^' || str[n] == '%')
        {
            chk:
            if((top >= 0) && chk_priority(str[n]) <= chk_priority(stack[top]))
            {

                arr[a] = pop(stack, top);
                top--;
                a++;
                goto chk;
            }
            top++;
            push(stack, str[n], top);
        }
        else if(str[n] == '(')
        {
            top++;
            push(stack, str[n], top);
        }
        else if(str[n] == ')')
        {
            while(stack[top] != '(')
            {
                arr[a] = pop(stack, top);
                top--;
                a++;
            }
            top--;
        }
        else if(str[n] ==' ')
        {}
        else
        {
            arr[a] = str[n];
            a++;
        }
        n++;
    }
    while(top > -1)
    {
        arr[a] = pop(stack, top);
        top--;
        a++;
    }
    arr[a] = '\0';
    printf("\nPostfix expression of %s is :: ",str);
    disp(arr);
    return 0;
}

int chk_priority(char ch)
{
    int n;
    if(ch == '+' || ch == '-')
        n = 1;
    else if(ch == '*' || ch == '/' || ch == '%')
        n = 2;
    else if(ch == '^')
        n = 3;
    else if(ch = '(')
        n = 0;
    return n;
}
void push(char *stack, char ch, int top)
{
    stack[top] = ch;
}
char pop(char *ch, int top)
{
    char c;
    c = ch[top];
    return c;
}
void disp(char *arr)
{
    int n = 0;
    while(arr[n] != '\0')
    {
        printf("%c",arr[n]);
        n++;
    }
    printf("\n\n");
}