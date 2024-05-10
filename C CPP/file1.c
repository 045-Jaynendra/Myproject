#include<stdio.h>
#include<string.h>
int main()
{
    char ch1,ch2;
    char str[30];
    char topic[50],stopic[70];
    char topic2[50],stopic2[70];
    int i=0,j=0,k=0,l=0,m=0,t=0,st=0;
    int n[200];
    FILE *fp1 = fopen("ques3_sample_test_1.txt","r");
    FILE *fp2 = fopen("ques3_data.txt","r");
    FILE *fp3 = fopen("abc.txt","w");
    do
    {
        ch1 = fgetc(fp1);
        do
        {
            topic[i] = ch1;
            i++;
            ch1 = fgetc(fp1);
        }while(ch1!='-');
        i=0;
        ch1 = fgetc(fp1);
        do
        {
            stopic[j] = ch1;
            j++;
            ch1 = fgetc(fp1);
            if(ch1=='-')
            {
                //Compare                
                j=0;
                do      //File 2
                {
                    FILE *tmp = fp2;
                    l++;
                    ch2 = fgetc(tmp);
                    while(ch2!='-')
                    {
                        topic2[k]=ch2;
                        k++;
                        ch2=fgetc(tmp);
                    }
                    k=0;
                    ch2=fgetc(tmp);
                    while(ch2!='-')
                    {
                        stopic2[k]=ch2;
                        k++;
                        ch2=fgetc(tmp);
                    }
                    k=0;
                    if(!strcmp(topic,topic2)&&!strcmp(stopic,stopic2))
                    {
                        n[m]=l;
                        m++;
                    }
                    strcpy(topic2,"");
                    strcpy(stopic2,"");
                }while(ch2!=EOF);
                m=0;
                do
                {
                    ch2 = fgetc(fp2);
                    if(n[m]==k)
                    {
                        while(ch2!='\n')
                        {
                            fputc(ch2,fp3);
                            ch2 = fgetc(fp2);
                            k++;
                        }
                        fputc(ch2,fp3);
                        m++;
                    }
                }while(ch2!=EOF);
                l=0;
                m=0;
            }
            strcpy(stopic,"");
        }while(ch1!='\n');
        strcpy(topic,"");
        //compare
        j=0;
    }while(ch1!=EOF);
    fclose(fp1);
    return 0;
}