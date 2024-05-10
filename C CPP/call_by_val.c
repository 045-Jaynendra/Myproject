#include<stdio.h>
void call_by_val(int *i)
{
    printf("\nHello ..................%d",*i);
    *i = 25;
}
int main()
{
    int a = 56;
    //call_by_val();
    call_by_val(&a);
    printf("\t%d",a);
    return 0;
}