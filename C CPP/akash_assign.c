#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sort(int p[], int at[], int bt[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(at[i]>at[j])
            {
                swap(&p[i], &p[j]);
                swap(&at[i], &at[j]);
                swap(&bt[i], &bt[j]);
            }
        }
    }
}
void sort_P(int p[], int at[], int bt[], int ct[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                swap(&p[i], &p[j]);
                swap(&at[i], &at[j]);
                swap(&bt[i], &bt[j]);
                swap(&ct[i], &ct[j]);
            }
        }
    }
}
int main()
{
    int i,j,n,wait;
    float float_val=0;
    printf("enter the number of process : ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    int *at=(int*)malloc(n*sizeof(int));
    int *bt=(int*)malloc(n*sizeof(int));
    int *ct=(int*)malloc(n*sizeof(int));
    int *tat=(int*)malloc(n*sizeof(int));
    int *wt=(int*)malloc(n*sizeof(int));
    float atat=0,awt=0;
    for(i=0;i<n;i++)
    {
	   p[i]=i+1;
    }
    printf("enter the arrival time of the process : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    printf("enter the burst time of the process : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    sort(p,at,bt,n);
    ct[0]=at[0] + bt[0];
    for(i=1; i<n; i++)
    {
        int count = 0;
    	for(j=i; j<n; j++)
	    {
	        if(at[j] <= ct[i-1])
                count++;
            else
                break;
	    }
	    if(count > 1)
        {
            float *response_r=(float*)malloc(count*sizeof(float));
            int k=0;
            int max = 0;
            for(j=i;j<count+i;j++)
            {
                wait=ct[i-1]-at[j];
                response_r[k]=(float)(wait+bt[j])/bt[j];
                if(response_r[k] > float_val)
                {
                    float_val=response_r[k];
                    max = k;
                }
                k++;
            }
            swap(&p[i], &p[i+max]);
            swap(&bt[i], &bt[i+max]);
            swap(&at[i], &at[i+max]);
            ct[i]=ct[i-1]+bt[i];
        }
        else if(count == 1)
        {
            ct[i]=ct[i-1]+bt[i];
        }
        else
        {
            ct[i] = ct[i-1]+at[i];
        }
    }
    sort_P(p,at,bt,ct,n);
    for(i=0;i<n;i++)
    {
	    tat[i]=ct[i]-at[i];
	    wt[i]=tat[i]-bt[i];
    }
    printf("\np\t at\t bt\t ct\t tat\t wt");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d\t %d\t %d\t %d\t %d",p[i],at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    for(i=0;i<n;i++)
    {
        atat+=tat[i];
        awt+=wt[i];
    }
    // average turnaround time and average waiting time
    atat=atat/n;
    awt=awt/n;
    printf("\n avg tat=%.2f and avg wt=%.2f",atat, awt);
    return 0;
}