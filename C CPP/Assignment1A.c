#include<stdio.h>
#include<string.h>
#include<conio.h>
struct table
{
    char inst[20];
    int bt,che,ce,cse,ee,me,tt;
};
void main()

{
    int i,n=0,m=0;
    char clg[20],br[40],ch[5];
    //
    struct table j[]={"NIT Trichy",4,0,3,1,1,5,0,
                      "NIT Suratkal",0,5,4,4,0,0,0,
                      "NIT Warangal",5,3,5,0,2,3,0,
                      "NIT Calicut",1,4,2,3,0,5,4,
                      "NIT Delhi",2,3,1,3,5,3,2};
    REPRINT:
    printf("\t\t\tBio\t\tChemical\tCivil\t\tComputer Science\tElectrical\tMechanical\tTextile\n\t\t\tTechnology\tEngineering\tEngineering\tand Engineering\t\tEngineering\tEngineering\tTechnology\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t%d\n",j[i].inst,j[i].bt,j[i].che,j[i].ce,j[i].cse,j[i].ee,j[i].me,j[i].tt);
    }
    RECHK:
    n=0;
    fflush(stdin);
    printf("Enter preferred college :: ");
    gets(clg);
    printf("Enter preferred branch :: ");
    gets(br);
    printf("\n\nSearching in database...\n\n");
    for(i=0;i<5;i++)
    {
        if(!strcmp(j[i].inst,clg))
        {
            n=1;
            break;
        }
    }
    if (n==0)
    {
        printf("\n\nSorry, No college named %s is present in database!",clg);
    }
    for(i=0;i<5;i++)
    {
        if(!strcmp(j[i].inst,clg))
        {
            if(!strcmp(br,"Bio Technology"))
            {
                if(j[i].bt>0)
                {
                    j[i].bt-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else if (!strcmp(br,"Chemical Engineering"))
            {
                if(j[i].che>0)
                {
                    j[i].che-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else if (!strcmp(br,"Civil Engineering"))
            {
                if(j[i].ce>0)
                {
                    j[i].ce-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else if (!strcmp(br,"Computer Science and Engineering"))
            {
                if(j[i].cse>0)
                {
                    j[i].cse-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else if (!strcmp(br,"Electrical Engineering"))
            {
                if(j[i].ee>0)
                {
                    j[i].ee-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else if (!strcmp(br,"Mechanical Engineering"))
            {
                if(j[i].me>0)
                {
                    j[i].me-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else if (!strcmp(br,"Textile Technology"))
            {
                if(j[i].tt>0)
                {
                    j[i].tt-=1;
                    printf("\n\nCongratulatioons!!!  You have been alloated a %s seat in %s!",br,clg);
                }
                else
                {
                    printf("\n\nSorry, no vacent seats available for your preferences!");
                }
            }
            else
            {
                printf("\n\nSorry, No such %s branch in %s!",br,clg);
            }
            break;
        }
    }
    printf("\n\nPress 'Y' for another run. Otherwise exit.\n");
    printf("\nor,  Press 'P' for print table after seat alloated before another run. Otherwise exit.\n");
    scanf("%s",ch);
    if(!strcmp(ch,"Y")||!strcmp(ch,"y"))
    {
        goto RECHK;
    }
    if(!strcmp(ch,"P")||(!strcmp(ch,"p")))
    {
        goto REPRINT;
    }
}