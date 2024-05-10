#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    FILE *fptr, *p;
    struct student s1, s2, s3;
    int ch;
    fptr = fopen("myfile.txt","w");
    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        return 0;
    }
    printf("Enter text :: \n");
    while((ch = getchar()) != EOF)
        fputc(ch, fptr);
    fclose(fptr);
    p = fopen("myfile.txt","r");
    if(p == NULL)
    {
        printf("\nnot open");
    }
    fseek(p,6,0);
    int pos = ftell(p);
    printf("\nFile Position is: %d",pos);
    while((ch = fgetc(p)) != EOF)
        printf("%c", ch);
    rewind(p);
    while((ch = fgetc(p)) != EOF)
        printf("%c", ch);
    fclose(p);
    return 0;
}