#include<stdio.h>
#include<stdlib.h>
void syn();
	void syntex()
	{
	int choice;
    
    system("cls");
    printf("Press 1 : for syntex of C program");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            syn();
            break;
/*        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:atm();
        break;
        case 8:void close();
        break;
*/
    }
}

void syn()
{
	printf("Parts of C program : \n");
	printf("#include statements (preprocessor directives) \n reserved words : (e.g., int, double, return, main, include, etc.)\n variables : (similar to Matlab)\n builtin functions (library functions) \n (printf, ...){} \n ( similar to Matlab start and end of functions)\n main function \n comments : (// single line, /* .... */ multiple line");
	printf("\n\n*The C basic syntax consists of header files, main function, and program code. This is the most fundamental structure in the C program. A C program necessarily consists of the main function because the execution of the program starts from this line. Without the main function, the program execution does not start.*\n");
	printf("Syntex of C program is given below:\n");
    printf("\n\n #include<Header>");
    printf("main function()");
    printf("/n { \n  Varible declartion;");
    printf("statements. \n.\n.\n . \n } \n");
}
int main()
{
    int i=0,f=0;
    printf("\n\n\t\t\t-----------------Demonstrations of Concepts of C ---------------------");
    printf("\n\n\t\t\t\t\t**TOPIC*\n\n");
    {
        syntex();
    }
    return 0;
}