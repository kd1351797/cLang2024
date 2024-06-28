#include<stdio.h>
main()
{
	int num, sum, i = 0;
	float avg;

	printf("®”“ü—Í :");
	scanf("%d", &num);
	sum = num;

	while (num != -999)
	{
		sum += num;
		i++;
		printf("®”“ü—Í :");
		scanf("%d", &num);
	}

	avg = (float)sum / i;

	printf("‡Œv = %d\n•½‹Ï = %.2f\n", sum, avg);
}