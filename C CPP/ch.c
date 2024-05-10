#include<stdio.h>
int main()
{
    int i,sum;
    printf("Sum :: %d\n",sum);
    for(i=0;i<10;i=i+3)
    {
        sum+=i*i;
        printf("Sum :: %d\n",sum);
    }
}