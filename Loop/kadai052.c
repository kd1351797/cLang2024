#include<stdio.h>
main()
{
	int i,j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 21; j++)
		{
			printf("%2d ", 20 * i + j);
		}
		printf("\n");
	}
}