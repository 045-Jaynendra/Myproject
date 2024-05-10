#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char name[30];
    char desig[30];
    int id;
    long long int phone_no;
    struct node *next;
} *head=NULL;

struct node *createdatabase(struct node *tmp, int n)
{
    int i;
    struct node *ins;

  tmp=head;
  for(i=2;i<=n;i++)
  {
    ins=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter the employee no%d name : ",i);
  scanf("%s",&ins->name);
  printf("Enter the employee no%d designation : ",i);
  scanf("%s",&ins->desig);
  printf("Enter the employee no%d id : ",i);
  scanf("%d",&ins->id);
  printf("Enter the employee no%d phone number : ",i);
  scanf("%ld",&ins->phone_no);
  ins->next=NULL;
  tmp->next=ins;
  tmp=ins;
  }
  return ins;
}
void display(struct node *display)
{
    head=display;
  if(display==NULL)
        printf("\ndatabase is empty\n\n");
  else
  {
      while(display!=NULL)
      {
          printf("\nName of the employee is %s",display->name);
           printf("\nDesignation of the employee is %s",display->desig);
            printf("\nId of the employee is %d",display->id);
             printf("\nPhone number of the employee is %ld",display->phone_no);
             printf("\n\n");
             display=display->next;
      }
  }
}


void insert(struct node *temp,int n)
{

    int i;
    struct node *insrt;

  //temp=head;
  for(i=1;i<=n;i++)
  {
    insrt=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter the employee no%d name : ",i);
  scanf("%s",&insrt->name);
  printf("Enter the employee no%d designation : ",i);
  scanf("%s",&insrt->desig);
  printf("Enter the employee no%d id : ",i);
  scanf("%d",&insrt->id);
  printf("Enter the employee no%d phone number : ",i);
  scanf("%ld",&insrt->phone_no);
  insrt->next=NULL;
  temp->next=insrt;
  temp=insrt;
  }
  printf("\n**********%d details are added in database succesfully**********\n\n",n);
}
void search(struct node *srch)
{
    int id;
    srch=head;

    if(srch==NULL)
    {
        printf("database is empty");
    }
    else
    {
     printf("Enter the Id of employee : ");
     scanf("%d",&id);

        while(srch!=NULL)
        {

            if(id==srch->id)
            {
                printf("\nThese is the complete information of %s",srch->name);
                printf("\nDesignation is %s",srch->desig);
                printf("\nId is %d",srch->id);
                printf("\nphone number is %ld",srch->phone_no);
                break;
            }
            else if(srch==NULL)
            {
                 printf("Name is not present in your database");
            }
            srch=srch->next;
        }


    }
}

//=======================================
void deleteData(int n)
{
    struct node *nn = head;
    if(head->id == n)
    {
        head = head->next;
        printf("\n%d has been deleted successfully!!!",n);
        return;
    }
    if(head->next == NULL)
    {
        printf("\n%d not fount in the link list!!!",n);
        return;
    }
    while(nn != NULL)
    {
        if(nn->next->id == n || (nn->next == NULL && nn->id == n))
        {
            nn->next = nn->next->next;
            printf("\n%d has been deleted successfully!!!",n);
            return;
        }
        if(nn->next != NULL && nn->next->next != NULL)
            nn = nn->next;
        else
            break;
    }
    printf("\n%d not fount in the link list!!!",n);
    return;
}
/*void deleteData(struct node *dlt)
{
  int id;
  struct node *pt=NULL;
  dlt=head;
  if(dlt==NULL)
  {
      printf("\n***********Database is empty*********\n");
  }
  else
  {
      printf("enter the Id :");
      scanf("%d",&id);
      while(dlt!=NULL)
      {
          if(id==dlt->id)
          {
            printf("\n**These complete details which is deleted by you**\n");
            printf("\nName : %s",dlt->name);
            printf("\ndesignation :%s",dlt->desig);
            printf("\nID : %d",dlt->id);
            printf("\nphone number : %ld",dlt->phone_no);
            dlt->next=pt->next;
          }
          else
          {
              pt=dlt;
               dlt=dlt->next;
          }

      }

  }
}*/




int main()
{

    int t,n,x,id;
    char ch[30];
    struct node *nn;
    while(1)
    {

           printf("\n##************************************************************###\n"
               "## 1. Create a database and enter the employee details\n"
               "## 2. Display all employee details\n"
               "## 3. Search a particular employee\n## 4. Insert employee details\n## 5. Delete a employee details\n## 6. Exit\n"
               "##*************************************************************###\n");
        printf("\nEnter your choice :- ");
        scanf("%d",&t);

    switch (t)
    {
    case 1:
        printf("how many no. of emloyee details you want to enter : ");
        scanf("%d",&n);
        head=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the employee no1 full name : ");
        scanf("%s",&head->name);

        printf("Enter the employee no1 designation : ");
        scanf("%s",&head->desig);

        printf("Enter the employee no1 id : ");
        scanf("%d",&head->id);
        printf("Enter the employee no1 phone number : ");
        scanf("%ld",&head->phone_no);
        head->next=NULL;
        nn = createdatabase(head,n);
        break;

    case 2:
        display(head);
        break;

    case 3:
        search(head);
        break;

    case 4:
        printf("how many no. of emloyee details you want to insert : ");
        scanf("%d",&x);
        insert(nn,x);
        break;
    case 5:
        printf("Enter id which deatils you want to delete :: ");
        scanf("%d",&id);
        deleteData(id);
        break;
    default:
        exit (0);
        break;
    }
    }

    return 0;
}