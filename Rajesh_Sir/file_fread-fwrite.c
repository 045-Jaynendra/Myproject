#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    FILE *fptr, *ptr;
    struct student s[]= {{1, "Ajay", 87.5},
                         {4, "Vijay", 79.8},
                         {7, "Vikash", 92.5}};
    fptr = fopen("myfile.txt", "w");
    fwrite(&s, sizeof(s), 1, fptr);
    fclose(fptr);
    ptr = fopen("myfile.txt", "r");
    int i = 1;
    while(feof(ptr))
    {
        fread(&s,sizeof(s),1,ptr);
        i++;
    }
    i = 0;
    while(i < 3)
    {
        printf("\n%d - %s - %f", s[i].roll, s[i].name, s[i].marks);
        i++;
    }
    fclose(ptr);
    return 0;
}