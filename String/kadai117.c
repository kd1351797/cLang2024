#include<stdio.h>
main()
{
	char day[7][10] = { "sunday",
						"monday",
						"tuesday",
						"wendesday",
						"thursday",
						"friday",
						"saturday" };
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; day[i][j] != '\0'; j++)
		{
			printf("%c",day[i][j]);
		}
		puts("\n");
	}
}