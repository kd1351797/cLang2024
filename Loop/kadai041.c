#include<stdio.h>
main()
{
	int num, sum, i = 0;
	float avg;

	printf("�������� :");
	scanf("%d", &num);
	sum = num;

	while (num != -999)
	{
		sum += num;
		i++;
		printf("�������� :");
		scanf("%d", &num);
	}

	avg = (float)sum / i;

	printf("���v = %d\n���� = %.2f\n", sum, avg);
}