#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int val(char str[])
{
    int n = 0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
        {
            if(str[i+1]=='M')
                n = n + (1000*((int)str[i]-48));
            else if(str[i+1]=='A')
                n = n + (100*((int)str[i]-48));
            else if(str[i+1]=='C')
                n = n + (10*((int)str[i]-48));
            else if(str[i+1]=='S')
                n = n + ((int)str[i]-48);
            printf("%d ",(int)str[i]-48);
            i++;
        }
        else
        {
            
            if(str[i]=='M')
                n = n + 1000;
            else if(str[i]=='A')
                n = n + 100;
            else if(str[i]=='C')
                n = n + 10;
            else if(str[i]=='S')
                n = n + 1;
            printf("1 ");
        }
    }
    printf(" = %d\n",n);
    return n;
}
void res(int s)
{
    int n=10, t=s;
    int count=0;
    while(t!=0)
    {
        t=t/10;
        count++;
    }
    printf("\n%d\n",count);
    char *j=(char*)malloc(count*sizeof(char));
    for (int i = (count-1); i >= 0; i--)
    {
        j[i]=(char)((s%10)+48);
        s=s/10;
    }
    int d=count;
    if(j[count]==NULL)
        printf("\n==>NULL");
}
int main()
{
    int n1,n2;
    char str1[10], str2[10];
    scanf("%s",str1);
    scanf("%s",str2);
    n1 = val(str1);
    n2 = val(str2);
    int s = n1 + n2;
    printf("%d",s);
    res(s);
    return 0;
}