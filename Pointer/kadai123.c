#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("実数値1	");
	scanf("%lf", p_a);
	printf("実数値2	");
	scanf("%lf", p_b);

	if (*p_a > *p_b)
	{
		printf("大きいほうは%fである\n", *p_a);
	}
	else
	{
		printf("大きいほうは%fである\n", *p_b);
	}
}