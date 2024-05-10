#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    int *ptr1, *ptr2;
    int length1, length2;
    length1 = 2;
    length2 = 3;
    ptr1 = (int *)malloc(length1);
    for(int i=0;i<length1;i++)
    {
        scanf("%d",&ptr1[i]);
    }
    for(int i=0;i<length1;i++)
    {
        printf("\n%d\t",ptr1[i]);
    }
    /* Expand the available memory with realloc */
    ptr2 = (int *)realloc(ptr1, length2);
    for(int i=0;i<length2;i++)
    {
        scanf("%d",&ptr2[length1+i]);
    }
    for(int i=0;i<(length1+length2);i++)
    {
        printf("%d\t",ptr2[i]);
    }
    printf("Size :: %d",sizeof(ptr2[4]));
    return 0;
}