#include<stdio.h>
main()
{
	int num, sum = 0, i = 1;
	float avg;
	printf("®” :");
	scanf("%d", &num);
	sum = num;
	while (1)
	{
		if (num == -999)break;
		

		printf("®” :");
		scanf("%d", &num);
		if (num < 0)continue;

		i++;
		sum += num;
	}

	avg = (float)sum / i;
	printf("‡Œv = %d\n•½‹Ï = %.3f\n", sum, avg);
}