#include<stdio.h>
#include<string.h>
#include<conio.h>
struct table
{
    /* data */
    char *inst;
    int bt,che,ce,cse,ee,me,tt;
};
int main()
{
    int i,n;
    char *clg,*br,*str;
    struct table j[]={
					  {"NIT Trichy",1,0,3,1,1,5,0},
                      {"NIT Suratkal",0,5,4,4,0,0,0},
                      {"NIT Warangal",5,3,5,0,2,3,0},
                      {"NIT Calicut",1,4,2,3,0,5,4},
                      {"NIT Delhi",2,3,1,3,5,3,2}
					  };
    for(i=0;i<5;i++)  					  
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",j[i].inst,j[i].bt,j[i].che,j[i].ce,j[i].cse,j[i].ee,j[i].me,j[i].tt);
    }
    printf("Enter preferred college :: ");
    gets(clg);
    printf("%s",clg);
    
    for(i=0;i<5;i++)
    {
        if(!strcmp(clg,j[i].inst))
        {
            printf("\nSuccess");
            return 0;
        }
    }
    printf("\nFail\n");
    return 0;
}