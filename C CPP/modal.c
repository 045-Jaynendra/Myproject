#include<stdio.h>	
#include<string.h>
#include <stdlib.h>

int comp(char temp1[], char temp2[],int w)
{
    int i=0,j=0,k=0;
    char string1[50],string2[50];
    while(w--)
    {
    k=0;
    while(temp1[i]!='-')               //getting topic name present in starting of each line    
    {   
     string1[k++]=temp1[i];              
     i++;
    }
    k=0;
    while(temp2[j]!='-')               //getting topic name present in starting of each line    
    {   
     string2[k++]=temp2[j];              
     j++;
    }
    }
    int y=strcmp(string2,string1);
    return y;
}


void main()
{    
    char temp1[500][100],temp2[100],gar;
    FILE *f,*fn;

    f = fopen("ques_data.txt","r");
    int n=0,w;
    printf("Enter column number : ");
    scanf("%d",&w);
    while(!feof(f))
    {
       fscanf(f,"%[^\n]",&temp1[n]);    
       fscanf(f,"%c",&gar); 
       n++;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)    
        {  
            int r=comp(temp1[i],temp1[j],w);
            if(r>0)  //swap
            {
                char k[100];
                strcpy(k,temp1[i]);
                strcpy(temp1[i],temp1[j]);
                strcpy(temp1[j],k);
            }
        
        }
    }
   fclose(f);
    remove("ques_data.txt");
   fn = fopen("ques_data.txt","w");
    for(int i=0;i<n;i++)
    {
     fprintf(fn,"%s",&temp1[i]);
     fprintf(fn,"\n");
    }
    
fclose(fn);
}