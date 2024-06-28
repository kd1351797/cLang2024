#include<stdio.h>
main()
{
	int j, i;

	printf("”‚ÍH");
	scanf("%d", &i);

	do
	{
		j = 0;
		do
		{
			printf("*");
			j++;
		}
		while (j < 5);
		printf("\n");
		i--;
	}
	while (i > 0);
}