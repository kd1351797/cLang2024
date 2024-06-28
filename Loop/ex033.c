#include<stdio.h>
main()
{
	int i, k, num;
	k = 0;

	printf("”‚ÍH ");
	scanf("%d", &num);

	i = 0;
	for (; num != -999;)
	{
		k += num;
		i++;
		printf("”‚ÍH ");
		scanf("%d", &num);
	}

	if (i != 0)
	{
		printf("‡Œv = %d\t•½‹Ï =%.2f", k, k / (float)i);
	}
}