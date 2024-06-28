#include<stdio.h>
main()
{
	int i = 1, sum = 1;
	printf("1");
	while (sum <= 300)
	{
		i++;
		printf("+%d	", i);
		sum += i;
	}
	printf("=%d\n", sum);
}