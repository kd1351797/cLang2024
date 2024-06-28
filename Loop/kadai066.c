#include<stdio.h>
main()
{
	int num = 1, sum = 1;
	printf("%d", num);
	do
	{
		num++;
		printf("+%d", num);
		sum+=num;

	} while (sum <= 300);
	printf("=%d\n", sum);

}