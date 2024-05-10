#include<stdio.h>
#include<string.h>
int find_day(int day, char month[10], int year)
{
    int t_day=0,r=0;
    if(!strcmp(month,"January") || !strcmp(month,"january"))
        r=0;
    else if(!strcmp(month,"february") || !strcmp(month,"February"))
        r=31;
    else if(!strcmp(month,"march") || !strcmp(month,"March"))
        r=59;
    else if(!strcmp(month,"April") || !strcmp(month,"april"))
        r=90;
    else if(!strcmp(month,"May") || !strcmp(month,"may"))
        r=120;
    else if(!strcmp(month,"June") || !strcmp(month,"june"))
        r=151;
    else if(!strcmp(month,"July") || !strcmp(month,"july"))
        r=181;
    else if(!strcmp(month,"August") || !strcmp(month,"august"))
        r=212;
    else if(!strcmp(month,"September") || !strcmp(month,"september"))
        r=243;
    else if(!strcmp(month,"October") || !strcmp(month,"october"))
        r=273;
    else if(!strcmp(month,"November") || !strcmp(month,"november"))
        r=304;
    else if(!strcmp(month,"December") || !strcmp(month,"december"))
        r=334;
    else
        return -1;
    if((year%4==0 || (year%100==0 && year%400==0))&&(month!="January" || month!="january" || month!="february" || month!="February"))
        r+=1;
    t_day=r+day;
    return t_day;
}
int main()
{
    int d,y,result;
    char m[10];
    printf("Enter date(month day, year : i.e; January 1,2004) :: ");
    scanf("%s %d, %d",&m,&d,&y);
    result=find_day(d,m,y);
    if(result==-1)
    {
        printf("Invalid Input");
        return 0;
    }
    printf("\nTotal day :: %d",result);
    return 0;
}