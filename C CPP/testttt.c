#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any number :: ");
    scanf("%d",&n);
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a Prime number.",n);
            return 0;
        }
    }
    printf("%d is a Prime number",n);
    return 0;
}