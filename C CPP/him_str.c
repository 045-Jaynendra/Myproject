#include<stdio.h>
struct himanshu
{
   int roll;
   float marks;
   char name[30];
};
int main( )
{
    int p,q,r;
    struct himanshu a;
    printf("\nEnter Roll :: ");
    scanf("%d",&a.roll);
    printf("\nEnter marks :: ");
    scanf("%f",&a.marks);
    printf("\nEnter name :: ");
    fflush(stdin);
    gets(a.name);
    printf("\nEnter Roll :: %d",a.roll);
    printf("\nEnter marks :: %f",a.marks);
    printf("\nEnter name :: %s",a.name);
    return 0;
}