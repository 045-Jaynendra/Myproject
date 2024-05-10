#include<stdio.h>
#include<string.h>
int main()
{
int a[5],b[3200],c[3200],i,j,k,l,m,n=0,f=1,g=1,h=0,p=0,q=0;
    int age,t,num=5,arr[5];
    char str[50];
    FILE *ptr;
    char name[12];
 
    printf("Akash\tThakur\n");
    printf("My Roll Number is:-  2*0*5*1*2*1*0*1*0\n");
    printf("DOB:-  05/august/1998\n");
    printf("Enter your age:- ");
    scanf("%d",&age);
    printf("my 50th birthday is 2048,\tmy 100th birthday is 2098,\tmy 150th birthday is 2148 ...... \n");
 
      printf("enter your name:- ");
    scanf("%s",str);
    t=strlen(str);
    printf("\n number of alphabets in %s is %d \n",str,t);
 
    ptr=fopen("akash.csv","w");
 
    fputs("Venketesh\nDeepak\nHariom\nUdaybhan\nJayprakash\n",ptr);
 
        fclose(ptr);
 
    ptr = fopen("akash.csv", "a");
 
   /* Write content to file */
   fprintf(ptr, "%s\n", "a##");
   fclose(ptr);
 
    
printf("Enter any five integer no. ..........\n");
    scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5]);
    for ( i = 1; i <= 5; i++)
    {
        h=h+a[i];
    }
    for(i=1;i<=5;i++)
    {
        b[p++]=a[i];
        for(j=1;j<5;j++)
        {
            b[p++]=(a[i]*10)+a[j];
            for(k=1;k<=5;k++)
            {
                b[p++]=(a[i]*100)+(a[j]*10)+a[k];
                for(l=1;l<=5;l++)
                {
                    b[p++]=(a[i]*1000)+(a[j]*100)+(a[k]*10)+a[l];
                    for(m=1;m<=5;m++)
                    {
                        b[p++]=(a[i]*10000)+(a[j]*1000)+(a[k]*100)+(a[l]*10)+a[m];
                    }
                }
            }
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(b[i]>b[j])
            {
                k=b[i];
                b[i]=b[j];
                b[j]=k;
            }
 
        }
    }
    printf("All Possible combinations are................\n\n");
    for ( i = 0; i < 3125; i++)
    {
        if(b[i]!=b[i+1])
        {
            q++;
            printf("%d\t",b[i]);
        }
    }
    printf("\n\nTotal no. of combination is :: %d\n\n",q);
    printf("Even no.'s in the combination are.................\n\n");
    for ( i = 0; i < 3125; i++)
    {
        if(b[i]!=b[i+1])
        {
            if(b[i]%2==0)
            {
                printf("%d\t",b[i]);
            }
        }
    }
    printf("\n\nOdd no.'s in the combination are.................\n\n");
    for ( i = 0; i < 3125; i++)
    {
        if(b[i]!=b[i+1])
        {
            if(b[i]%2!=0)
            {
                printf("%d\t",b[i]);
            }
        }
    }
    printf("\n\n");
      return 0;
}
