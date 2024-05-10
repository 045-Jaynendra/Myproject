#include<stdio.h>
int main()
{
    int check;
    printf("\n--- Loan Eligibility Checking Software ---\n\n");
    do
    {
        int cs;
        printf("Enter the Credit Score \t\t: ");
        scanf("%d",&cs);
        if(cs<750)
            printf("\nSorry, The Loan has been Rejected !!!");
        else
        {
            int age;
            printf("Enter the Age \t\t\t: ");
            scanf("%d",&age);
            if(age>=60)
            {
                int amount;
                printf("Enter Amount \t\t\t: ");
                scanf("%d",&amount);
                if(amount>=100000)
                    printf("\nSorry, The Loan has been Rejected !!!");
                else
                {
                    int tenure;
                    printf("Enter Tenure \t\t\t: ");
                    scanf("%d",&tenure);
                    if(tenure>=5)
                    {
                        int employed;
                        printf("Enter Employed 0 or 1\t\t: ");
                        scanf("%d",&employed);
                        if(employed)
                        {
                            int salary;
                            printf("Enter Salary \t\t\t: ");
                            scanf("%d",&salary);
                            if(salary>=0.1*amount)
                            {
                                int debt;
                                printf("Enter Existing Debt 0 or 1 \t: ");
                                scanf("%d",&debt);
                                if(debt)
                                    printf("\nSorry, The Loan has been Rejected !!!");
                                else 
                                    printf("\nCongratulation, The Loan has been Accepted !!!");
                            }
                            else
                            {
                                int collateral;
                                printf("Enter Collateral 0 or 1 \t: ");
                                scanf("%d",&collateral);
                                if(collateral)
                                {
                                    int debt;
                                    printf("Enter Existing Debt 0 or 1 \t: ");
                                    scanf("%d",&debt);
                                    if(debt)
                                        printf("\nSorry, The Loan has been Rejected !!!");
                                    else
                                        printf("\nCongratulation, The Loan has been Accepted !!!");
                                }
                                else
                                {
                                    int saving;
                                    printf("Enter Savings \t\t\t: ");
                                    scanf("%d",&saving);
                                    if(saving>=0.5*amount)
                                    {
                                        int debt;
                                        printf("Enter Existing Debt 0 or 1 \t: ");
                                        scanf("%d",&debt);
                                        if(debt)
                                            printf("\nSorry, The Loan has been Rejected !!!");
                                        else
                                            printf("\nCongratulation, The Loan has been Accepted !!!");
                                    }
                                    else
                                        printf("\nSorry, The Loan has been Rejected !!!");
                                }
                            }
                        }
                        else
                        {
                            int collateral;
                            printf("Enter Collateral 0 or 1 \t: ");
                            scanf("%d",&collateral);
                            if(collateral)
                            {
                                int debt;
                                printf("Enter Existing Debt 0 or 1 \t: ");
                                scanf("%d",&debt);
                                if(debt)
                                    printf("\nSorry, The Loan has been Rejected !!!");
                                else
                                    printf("\nCongratulation, The Loan has been Accepted !!!");
                            }
                            else
                            {
                                int saving;
                                printf("Enter Savings \t\t\t: ");
                                scanf("%d",&saving);
                                if(saving>=0.5*amount)
                                {
                                    int debt;
                                    printf("Enter Existing Debt 0 or 1 \t: ");
                                    scanf("%d",&debt);
                                    if(debt)
                                        printf("\nSorry, The Loan has been Rejected !!!");
                                    else
                                        printf("\nCongratulation, The Loan has been Accepted !!!");
                                }
                                else
                                    printf("\nSorry, The Loan has been Rejected !!!");
                            }
                        }
                    }
                    else
                    {
                        int employed;
                        printf("Enter Employed 0 or 1\t\t: ");
                        scanf("%d",&employed);
                        if(employed)
                        {
                            int salary;
                            printf("Enter Salary \t\t\t: ");
                            scanf("%d",&salary);
                            if(salary>=0.1*amount)
                            printf("\nCongratulation, The Loan has been Accepted !!!");
                            else
                                printf("\nSorry, The Loan has been Rejected !!!");
                        }
                        else
                            printf("\nSorry, The Loan has been Rejected !!!");
                    }   
                }
            }
            else
            {
                int amount;
                printf("Enter Amount \t\t\t: ");
                scanf("%d",&amount);
                if(amount>=10000000)
                    printf("\nSorry, The Loan has been Rejected !!!");
                else
                {
                    int tenure;
                    printf("Enter Tenure \t\t\t: ");
                    scanf("%d",&tenure);
                    if(tenure<25)
                    {
                        int employed;
                        printf("Enter Employed 0 or 1\t\t: ");
                        scanf("%d",&employed);
                        if(employed)
                        {
                            int salary;
                            printf("Enter Salary \t\t\t: ");
                            scanf("%d",&salary);
                            if(salary>=0.1*amount)
                            printf("\nCongratulation, The Loan has been Accepted !!!");
                            else
                                printf("\nSorry, The Loan has been Rejected !!!");
                        }
                        else
                            printf("\nSorry, The Loan has been Rejected !!!");
                    }
                    else    
                    {
                        int employed;
                        printf("Enter Employed 0 or 1\t\t: ");
                        scanf("%d",&employed);
                        if(employed)
                        {
                            int salary;
                            printf("Enter Salary \t\t\t: ");
                            scanf("%d",&salary);
                            if(salary>=0.1*amount)
                            {
                                int debt;
                                printf("Enter Existing Debt 0 or 1 \t: ");
                                scanf("%d",&debt);
                                if(debt)
                                    printf("\nSorry, The Loan has been Rejected !!!");
                                else
                                    printf("\nCongratulation, The Loan has been Accepted !!!");
                            }
                            else
                            {
                                int collateral;
                                printf("Enter Collateral 0 or 1 \t: ");
                                scanf("%d",&collateral);
                                if(collateral)
                                {
                                    int debt;
                                    printf("Enter Existing Debt 0 or 1 \t: ");
                                    scanf("%d",&debt);
                                    if(debt)
                                        printf("\nSorry, The Loan has been Rejected !!!");
                                    else
                                        printf("\nCongratulation, The Loan has been Accepted !!!");
                                }
                                else
                                {
                                    int saving;
                                    printf("Enter Savings \t\t\t: ");
                                    scanf("%d",&saving);
                                    if(saving>=0.5*amount)
                                    {
                                        int debt;
                                        printf("Enter Existing Debt 0 or 1 \t: ");
                                        scanf("%d",&debt);
                                        if(debt)
                                            printf("\nSorry, The Loan has been Rejected !!!");
                                        else
                                            printf("\nCongratulation, The Loan has been Accepted !!!");
                                    }
                                    else
                                        printf("\nSorry, The Loan has been Rejected !!!");
                                }
                            }
                        }
                        else
                        {
                            int collateral;
                            printf("Enter Collateral 0 or 1 \t: ");
                            scanf("%d",&collateral);
                            if(collateral)
                            {
                                int debt;
                                printf("Enter Existing Debt 0 or 1 \t: ");
                                scanf("%d",&debt);
                                if(debt)
                                    printf("\nSorry, The Loan has been Rejected !!!");
                                else
                                    printf("\nCongratulation, The Loan has been Accepted !!!");
                            }       
                            else
                            {
                                int saving;
                                printf("Enter Savings \t\t\t:");
                                scanf("%d",&saving);
                                if(saving>=0.5*amount)
                                {
                                    int debt;
                                    printf("Enter Existing Debt 0 or 1 \t: ");
                                    scanf("%d",&debt);
                                    if(debt)
                                        printf("\nSorry, The Loan has been Rejected !!!");
                                    else
                                        printf("\nCongratulation, The Loan has been Accepted !!!");
                                }
                                else
                                    printf("\nSorry, The Loan has been Rejected !!!");
                            }
                        }
                    }
                }
            }
        }
        printf("\n\nEnter '1' to Check Again : ");
        scanf("%d",&check);
        if(check==1)
            printf("\n--- Loan Eligibility Checking Software ---\n\n");
        else
            printf("\n\nThankyou for Using this Software\n");
    }while(check==1);
    return 0; 
}