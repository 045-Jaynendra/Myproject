#include<stdio.h>
int num(int);
int main()
{
    int n,r;
    printf("Enter any integer number: ");
    scanf("%d",&n);
    r = num(n);
    printf("\nr = %d",r);
    return 0;
}
int num(int x)
{
    if(x == 1)
    {
        return 1;
    }
    else
    {
        return num(x - 1) + num(x - 1);
    }
}