#include<stdio.h>
main()
{
	int i, k, num;
	k = 0;

	printf("数は？ ");
	scanf("%d", &num);

	i = 0;
	for (; num != -999;)
	{
		k += num;
		i++;
		printf("数は？ ");
		scanf("%d", &num);
	}

	if (i != 0)
	{
		printf("合計 = %d\t平均 =%.2f", k, k / (float)i);
	}
}