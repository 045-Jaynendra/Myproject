#include<stdio.h>
#include<conio.h>
struct Student
{
    int roll_no;
    char name[20];
    float marks;
    //struct Student *p;
};
void main()
{
    struct Student s1,s2,s3;
    printf("Hello India");
    printf("\nSize of s1: %d",sizeof(s1));
    printf("\nSize of s2: %d",sizeof(s2));
    printf("\nSize of s3: %d",sizeof(s3));
}