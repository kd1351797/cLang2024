#include<stdio.h>
main()
{
	int num, sum, i = 0;
	float avg;

	printf("整数入力 :");
	scanf("%d", &num);
	sum = num;

	while (num != -999)
	{
		sum += num;
		i++;
		printf("整数入力 :");
		scanf("%d", &num);
	}

	avg = (float)sum / i;

	printf("合計 = %d\n平均 = %.2f\n", sum, avg);
}