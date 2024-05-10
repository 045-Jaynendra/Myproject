#include<stdio.h>
int* add();
int h = 10;
int main()
{
    char n;
    int *p;
    p = add();
    printf("\n%d",*p);
    return 0;
}
int* add()
{
    //printf("\n%f\t%d",a,b);
    printf("\nHello");
    return &h;
}