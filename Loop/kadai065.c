#include<stdio.h>
main()
{
	int num=0, sum = 0, i = 0;
	float avg;
	do
	{
		sum += num;
		printf("整数を入力 :");
		scanf("%d", &num);
		i++;
	} while (num != -999);

	avg = (float)sum / i;

	printf("合計 = %d\n平均 = %f\n", sum, avg);
}