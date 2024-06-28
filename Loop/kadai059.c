#include<stdio.h>
main()
{
	int i,j, num;

	printf("    ");
	for (i = 1; i < 10; i++)
	{
		printf("  %2d", i);
	}
	printf("\n");
	for (i = 0; i < 40; i++)
	{
		printf("=");
	}
	printf("\n");

	for (i = 1; i < 10; i++)
	{
		printf("%2d |",i);
		for (j = 1; j < 10; j++)
		{
			printf("  %2d", i * j);
		}
		printf("\n");
	}
}