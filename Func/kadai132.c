#include<stdio.h>
main()
{
	int num, sum =0, i=0;
	float avg;
	printf("��������́i^Z�ŏI���j");
	while(scanf("%d", &num))
	{
		sum += num;
		i++;
		printf("��������́i^Z�ŏI���j");
	}
	avg = (float)sum / i;
	printf("���v = %d\n���� = %.3f\n", sum, avg);
}