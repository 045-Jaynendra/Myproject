#include<stdio.h>		//standard input output
#include<stdlib.h>    	//for exit function
#include<string.h>   	//for strlen function
#include<ctype.h>     	//for isalpha function
#define size 30      
int top;
void push(float val,float stack[])	//insertion of data into stack
{
	if(top==size-1)
		printf("\nStack Overflow,can't push an element\n");
	else 
	{
		top=top+1;
		stack[top]=val;
	}
}
float pop(float stack[])	//poped the data from stack
{
	float val;
	if(top==-1)
	{
		printf("\nStack Underflow,can't pop an element\n");
		return 'm' ;
	}
	else 
	{
		val=stack[top];
	   	top--;
	   	return val;
    } 	
}
int is_Empty()      //to check a stack is empty or not
{
	if(top==-1)
		return 0;
	else
		return 1;
}
int is_full()       //to check a stack is full or not 
{
    if(top==size-1)
    	return 1;
    return 0;
}
int precedence(char ch)		//function to check the precedence for opration
{
	if(ch=='*'|| ch=='/')
	    return 2;
	else if(ch=='+'|| ch=='-')
	    return 1;
	 else 
	    return 0;
}
int is_Operator(char ch)	//function to check whether the operators should be +,-,*,/ or others
{
	if(ch=='+'||ch=='-'||ch=='/'||ch=='*')
		return 0;
	else
		return 1;
}
int  infix_to_postfix(char infix[],char postfix[],float stack[])	//shorting in order to postfix
{
	int i=0,j=0,k=0;
	char next,element;
	while(i<strlen(infix))
	{
		element=infix[i];
		if(element=='(')
		{
			push(element,stack);
			i++;
     	}
		else if(element==')')
		{    
		    next=pop(stack);
			while(next!='(')
			{
			    postfix[j]=next;
			    j++;
			    next=pop(stack); 
	    	}
	    	i++;
		}
	    else if(is_Operator(element))
        {
        	postfix[j]=element;
        	j++;
        	i++;
            k++;
		}
		else if(precedence(element)>precedence(stack[top]))
            {
            	push(element,stack);
            	i++;
			}
		else
			{
				postfix[j]=pop(stack);
				j++;
			}
	}
	while(is_Empty())
	{
		postfix[j]=pop(stack);
		j++;
	}
	postfix[j]='\0';
    printf("\n\nPostfix expression is: %s\n",postfix);
    return k;
}
float evaluation(char postfix[],float stack[],int k)		//getting the result
{
	float op1,op2,temp,result;
	int i,j=0,var_val[k];
	printf("\n\n");
	for(i=0;i<k;i++)  //storing values of variables in expression
    {
	    printf("Enter the  %d th value :: ",i+1);
        scanf("%d",&var_val[i]);
    }
	for(i=0;i<strlen(postfix);i++)
	{
        //check whether a element is variable or not
		if(is_Operator(postfix[i]))
		{ 
			push(var_val[j],stack);  // if yes then push value of that variable in stack 
		    j++;                // which stored earlier in array 'var_val''
		}
		else       //if operator then pop out two operand from stack
		{ 
			op2=pop(stack);
			op1=pop(stack);
			switch(postfix[i])  //checking operator and performing operation on it 
			{
				case '+':
					temp=op1+op2;
                    break;
				case '-':
					temp=op1-op2;
                    break;
				case '*':
					temp=op1*op2;
                    break;
				case '/':
					if(op2==0) 
				    {
						printf("\nInvalid inputs!!! Leads to divide by 0...\n"); //error
						return 'D';
					}
					else
					   	temp=op1/op2;		
				break;
			}
			push(temp,stack);  //push back result in stack
		}
	}
	result=pop(stack);
	return result;
}
int main()		//main function
{   
    float stack[size];
    char infix[size],postfix[size];
    float val;
    int arr[5],i,k=0;
    char ch;
    printf("\nEnter the expression :: ");
    scanf("%s",infix);
    k= infix_to_postfix(infix,postfix,stack);  //storing number of variables in expression
    printf("\nEnter the value of mentioned variable........\n");
    do
	{
	    top=-1;
        val=evaluation(postfix,stack,k);
        if(val!='D')
           	printf("\n%f",val);
        printf("\n\nPress 'Y' for another run. Otherwise 0 to exit :");
        scanf("%s",&ch);

        if(ch=='0')
        	exit(0);
	}while(ch=='Y'||ch=='y');
    return 0;
}