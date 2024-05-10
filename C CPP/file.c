#include<stdio.h>
int main()
{
    char ch;
    char str[30];
    char *topic,*sub_topic;
    int n;
    FILE *fp1 = fopen("ques3_data.txt","r");
    FILE *fp2 = fopen("abc.txt","a+");
    FILE *fp3 = fopen("abcd.txt","a+");
    FILE *tmp = fp1;
    do
    {
        ch = fgetc(tmp);
        printf("%s@",ch);
    }while(ch!=EOF);
    printf("%c",ch);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

//============================================================

    /*do
    {
        ch = fgetc(fp1);
        if(ch=='-')
        {
            st++;
            ch = fgetc(fp1);
            while(ch!='-')
            {
                sub_topic[j]=ch;
                j++;
                ch = fgetc(fp1);
                if(ch=='\n'||ch==EOF)
                {
                    strcpy(topic,"");
                    strcpy(sub_topic,"");
                    printf("Fetch Data is %s\n",sub_topic);
                    i=0;
                    j=0;
                    break;
                }
            }
            j=0;
        }
        topic[i]=ch;
        printf("Fetch Data is %s\n",topic);
    }while(ch!=EOF);*/
    