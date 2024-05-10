#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char Fname[100][25], Lname[100][25];
char cont[100][15];

void operate(char *line, int i)
{
	int k=0,l=0;
	char number[15]="";
	while(k<strlen(line))
	{
		if(line[k]!='-'){
		Fname[i][l]=line[k];
		l++;
		k++;
		}
		else{
		k++;
		break;
		}
	}
	l=0;
	while(k<strlen(line))
	{
		if(line[k]!='-'){
		Lname[i][l]=line[k];
		l++;
		k++;
		}
		else{
		k++;
		break;
		}
	}
	l=0;
	while(k<strlen(line) )
	{
		cont[i][l]=line[k];
		k++;
		l++;
	}
}

void fsort()
{
	int i,j;
	char temp[30];
	for(i=0;i<100;i++)
	{
		for(j=0;j<100-i-1;j++)
		{
			if(strcmp(Fname[j],Fname[j+1])>0)
			{
				strcpy(temp,Fname[j]);
				strcpy(Fname[j],Fname[j+1]);
				strcpy(Fname[j+1],temp);
				strcpy(temp,Lname[j]);
				strcpy(Lname[j],Lname[j+1]);
				strcpy(Lname[j+1],temp);
				strcpy(temp,cont[j]);
				strcpy(cont[j],cont[j+1]);
				strcpy(cont[j+1],temp);
			}
		}
	}
	for(i=0;i<100;i++)
	{
		printf("%s- ",Fname[i]);
		printf("%s- ",Lname[i]);
		printf("%s- ",cont[i]);
	}
}

void lsort()
{
	int i,j;
	char temp[30];
	for(i=0;i<100;i++)
	{
		for(j=0;j<100-i-1;j++)
		{
			if(strcmp(Lname[j],Lname[j+1])>0)
			{
				strcpy(temp,Fname[j]);
				strcpy(Fname[j],Fname[j+1]);
				strcpy(Fname[j+1],temp);
				strcpy(temp,Lname[j]);
				strcpy(Lname[j],Lname[j+1]);
				strcpy(Lname[j+1],temp);
				strcpy(temp,cont[j]);
				strcpy(cont[j],cont[j+1]);
				strcpy(cont[j+1],temp);
			}
		}
	}
	for(i=0;i<100;i++)
	{
		printf("%s- ",Fname[i]);
		printf("%s- ",Lname[i]);
		printf("%s- ",cont[i]);
	}
}

void nsort()
{
	int i,j;
	char temp[30];
	for(i=0;i<100;i++)
	{
		for(j=0;j<100-i-1;j++)
		{
			if(strcmp(cont[j],cont[j+1])>0)
			{
				strcpy(temp,Fname[j]);
				strcpy(Fname[j],Fname[j+1]);
				strcpy(Fname[j+1],temp);
				strcpy(temp,Lname[j]);
				strcpy(Lname[j],Lname[j+1]);
				strcpy(Lname[j+1],temp);
				strcpy(temp,cont[j]);
				strcpy(cont[j],cont[j+1]);
				strcpy(cont[j+1],temp);
			}
		}
	}
	for(i=0;i<100;i++)
	{
		printf("%s- ",Fname[i]);
		printf("%s- ",Lname[i]);
		printf("%s- ",cont[i]);
	}
}

void main()
{
	FILE *source;
	source= fopen("ques_data.txt", "r");
	char line[100];
	int k=0,ch;
	while(fgets(line, sizeof(line), source))
	{
		k++;
		operate(line,k);
		
	}
     printf("\n\n");
	while(1)
	{
		printf("\t1.sort by first name\n");
		printf("\t2.sort by title\n");
		printf("\t3.sort by mobile number\n");
		printf("\t4.exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fsort();
				break;
			case 2:
				lsort();
				break;
			case 3:
				nsort();
				break;
			case 4:
				exit(1);
		}
	}
	
}