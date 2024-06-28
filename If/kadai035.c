#include<stdio.h>
main()
{
	int num;
	printf("整数は？ :");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("プラス\n");
	}
	else if (num < 0)
	{
		printf("マイナス\n");
	}
	else
	{
		printf("0\n");
	}
}