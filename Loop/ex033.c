#include<stdio.h>
main()
{
	int i, k, num;
	k = 0;

	printf("���́H ");
	scanf("%d", &num);

	i = 0;
	for (; num != -999;)
	{
		k += num;
		i++;
		printf("���́H ");
		scanf("%d", &num);
	}

	if (i != 0)
	{
		printf("���v = %d\t���� =%.2f", k, k / (float)i);
	}
}