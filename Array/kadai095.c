#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i, sum_a, sum_b;
	float avg_a, avg_b;

	printf("配列a =");
	for (i = 0, sum_a = 0; i < 10; i++)
	{
		printf("%4d ", a[i]);
		sum_a += a[i];
	}
	avg_a = (float)sum_a / i;
	printf("\n合計 = %d\t平均 = %.3f\n", sum_a, avg_a);

	printf("配列b =");
	for (i = 0, sum_b = 0; i < 10; i++)
	{
		printf("%4d ", b[i]);
		sum_b += b[i];
	}
	avg_b = (float)sum_b / i;
	printf("\n合計 = %d\t平均 = %.3f\n", sum_b, avg_b);
}