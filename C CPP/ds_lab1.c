//DEEPAK CHOUDHARY             DATE-29/09/2021
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[5][7] = {{4, 0, 3, 1, 1, 5, 0},
					 {0, 5, 4, 4, 0, 0, 0},
					 {5, 3, 5, 0, 2, 3, 0},
					 {1, 4, 2, 3, 0, 5, 4},
					 {2, 3, 1, 3, 5, 3, 2}};
	char cl[30], br[32];
	int i, j;
	char ch;
	do
	{
		fflush(stdin);
		printf("\nEnter Preferred College:   ");
		gets(cl);
		printf("\nEnter Preferred Branch :   ");
		gets(br);
		printf("\nsearching in database...........");
		if (strcmp(cl, "NIT Trichy") == 0)
			i = 0;
		else if (strcmp(cl, "NIT Surathkal") == 0)
			i = 1;
		else if (strcmp(cl, "NIT Warangal") == 0)
			i = 2;
		else if (strcmp(cl, "NIT Calicut") == 0)
			i = 3;
		else if (strcmp(cl, "NIT Delhi") == 0)
			i = 4;
		else
		{
			printf("\nSorry, There is no such college exist named %s !", cl);
			return 0;
		}
		if (strcmp(br, "Bio Technology") == 0)
			j = 0;
		else if (strcmp(br, "Chemical Engineering") == 0)
			j = 1;
		else if (strcmp(br, "Civil Engineering") == 0)
			j = 2;
		else if (strcmp(br, "Computer Science and Engineering") == 0)
			j = 3;
		else if (strcmp(br, "Electrical Engineering") == 0)
			j = 4;
		else if (strcmp(br, "Mechanical Engineering") == 0)
			j = 5;
		else if (strcmp(br, "Textile Technology") == 0)
			j = 6;
		else
		{
			printf("\nSorry, There is no such Branch present named %s !", br);
			return 0;
		}
		//======================================================
		if (arr[i][j] > 0)
		{
			printf("\n Congratulations!!! You have been alloted a seat for %s in %s", br, cl);
			arr[i][j]--;
		}
		else
		{
			printf("\nSorry, there is no vacant seat for %s in %s !!!", br, cl);
		}
		printf("\nEnter y for search again and any key to leave :  ");
		scanf("%c", &ch);
	} while (ch == 'y');
	printf("\n Best wishes for your bright future\n THANK YOU");
	return 0;
}