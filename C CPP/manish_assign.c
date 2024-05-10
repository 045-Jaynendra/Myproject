#include<stdio.h>
typedef struct
{
    int select;
    char lastname[25];
    char firstname[25];
    char address[25];
    char phonenumber[25];
} addressbook;
int main()
{
    FILE *fp;
    addressbook a;
    fp = fopen("addressbook.dat","a+");
    printf("enter details...........\n");
    printf("enter lastname:\n");
    scanf("%s", a.lastname);
    printf("enter firstname:\n");
    scanf("%s", a.firstname);
    printf("enter address:\n");
    scanf("%s", a.address);
    printf("enter phone number:\n");
    scanf("%s", a.phonenumber);
    fwrite(&a, sizeof(a), 1, fp); /* notice, array indexed */
    fclose(fp);
    fopen("addressbook.dat", "r");
    fread(&a, sizeof(a), 1, fp );
    while(fp != EOF)
    {
    printf("\n\nlastname:%s\n", a.lastname);
    printf("firstname:%s\n", a.firstname);
    printf("address:%s\n", a.address);
    printf("phonenumber:%s\n", a.phonenumber);
    }
    fclose(fp);
    return 0;
}