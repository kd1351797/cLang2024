#include<stdio.h>
main()
{
	int num, min = 0, max = 0;
	printf("��������́i^Z�ŏI���j");
	while(scanf("%d", &num))
	{
		if (max < num)
		{
			max = num;
		}
		else if (min > num)
		{
			min = num;
		}
		printf("��������́i^Z�ŏI���j");
	}

	printf("max = %d\nmin = %d\n", max, min);
}