#include <stdio.h>
main()
{
	int su1, su2, su3, sum;
	float avg;

	printf("������3���� :");
	scanf("%d%d%d", &su1, &su2, &su3);

	sum = su1 + su2 + su3;
	avg = (float)sum / 3;

	printf("���v = %d \t ���� = %.2f \n", sum, avg);
}