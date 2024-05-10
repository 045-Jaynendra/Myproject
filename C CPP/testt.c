#include<stdio.h>
#include<ctype.h>
#define size 5
int stack[size],top=-1; //an integer stack and that is empty
//function declaration
void push(int e);   //push an integer value e
int pop();  //it returns an integer value
void main() 
{
    char pe[30];    //postfix pxpr
    int i,v,op1,op2;    //index,value,oprands
    printf("\nEnter any postfix expression :: ");
    gets(pe);
    for ( i = 0; pe[i] != '\0'; i++)    //scanning the postfix expression
    {   //oprands can be alphabet or consonant
        if(isalpha(pe[i]))  //for ex pe[i] is 'A'
        {
            scanf("%d",&v);
            push(v);
        }
        else if (isdigit(pe[i]))
            push(pe[i]);    //for ex. pe[i] is '2' then '2'-'0'
        else    //operator case
        {   //pop top two values from the stack
            op2=pop();
            op1=pop();
            switch (pe[i])  //based on operator, we perform the
            {
                case '+':push(op1+op2);break;
                case '-':push(op1-op2);break;
                case '*':push(op1*op2);break;
                case '/':push(op1/op2);break;
                case '%':push(op1%op2);break;
                case '^':push(op1^op2);break;
                default:printf("\nInvalid operation.");
            }   //closing of switch
        }   //closing of else
    }   //closing of for loop
    //after scanning the entire postfix expr, the ans is at top of
    printf("The result id %d",stack[top]);
}//closing the main() function

//function definition
void push(int e)
{
    if(top==size-1)
        printf("\nstack is full");
    else
        stack[++top]=e;
}
int pop()
{
    if(top==-1)
        printf("\nStack is empty.");
    else
        return stack[top--];
}
int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='+'||x=='/')
        return 2;
}