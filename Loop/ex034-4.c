#include<stdio.h>
main()
{
	int j, i, su;

	printf("”‚ÍH");
	scanf("%d", &su);

	i = 1;
	do
	{
		j = 0;
		do
		{
			printf(" ");
			j++;
		} while (j < su-i+1);

		j = 0;
		do
		{
			printf("*");
			j++;
		}while (j < i);

		printf("\n");
		i++;
	}while (i <= su);
}