#include<stdio.h>
main()
{
	int num, min = 0, max = 0;
	printf("整数を入力（^Zで終了）");
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
		printf("整数を入力（^Zで終了）");
	}

	printf("max = %d\nmin = %d\n", max, min);
}