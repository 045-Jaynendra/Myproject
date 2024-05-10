#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 45,b = 60,*p,**ptp;
    p = &a;
    ptp = &p;
    printf("%x",&a);
    printf("\n%x",p);
    printf("\n%d",*ptp);
    printf("\n%x",&p);
    printf("\n%x",ptp);
    printf("\n%x",&ptp);
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    a = 65;
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    printf("\n%d",a);
    *p = 50;
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    **ptp = 100;
    printf("\n%d",a);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    p = &b;
    printf("\n%x",&b);
    printf("\n%x",p);
    printf("\n%x",*ptp);
    printf("\n%x",&p);
    printf("\n%x",ptp);
    printf("\n%x",&ptp);
    printf("\n%d",b);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    *p = a + **ptp;
    printf("\n%d",b);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    **ptp = *p - b;
    printf("\n%d",b);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
    a = 78 + **ptp;
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",*p);
    printf("\n%d",**ptp);
}