#include<stdio.h>
main()
{
	int num, sum = 0, i = 1;
	float avg;
	printf("®” :");
	scanf("%d", &num);
	while (1)
	{
		sum += num;
		if (num == -999)break;
		printf("®” :");
		scanf("%d", &num);
		i++;
	}

	avg = (float)sum / i;
	printf("‡Œv = %d\n•½‹Ï = %.3f\n", sum, avg);
}