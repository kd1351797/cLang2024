#include<stdio.h>
main()
{
	int num, sum =0, i=0;
	float avg;
	printf("整数を入力（^Zで終了）");
	while(scanf("%d", &num))
	{
		sum += num;
		i++;
		printf("整数を入力（^Zで終了）");
	}
	avg = (float)sum / i;
	printf("合計 = %d\n平均 = %.3f\n", sum, avg);
}