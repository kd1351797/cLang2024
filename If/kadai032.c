#include<stdio.h>

main()
{
	int num;
	printf("整数？");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("その数は偶数です\n");
	}
	else
	{
		printf("その数は奇数です\n");
	}
}