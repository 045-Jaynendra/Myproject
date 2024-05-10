#include<stdio.h>
int isprime(int n)
{
    int i;
    int c=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if(c==0)
    {
     return 1;
    }
    else 
    {
     return 0;
    }
}
int main()
{
    int i;
    scanf("%d",&i);
        if(isprime(i) ==1)
        {
            printf("%d\n",i);
        }
}