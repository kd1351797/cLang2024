#include<stdio.h>
main()
{
	int num=0, sum = 0, i = 0;
	float avg;
	do
	{
		sum += num;
		printf("®”‚ğ“ü—Í :");
		scanf("%d", &num);
		i++;
	} while (num != -999);

	avg = (float)sum / i;

	printf("‡Œv = %d\n•½‹Ï = %f\n", sum, avg);
}