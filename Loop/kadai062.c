#include<stdio.h>
main()
{
	int i = 20;
	do
	{
		printf("%2d ", i);
		if (i % 10 == 1)		//do while‚¾‚©‚ç1
		{
			printf("\n");
		}
		i--;
	} while (i > 0);
}