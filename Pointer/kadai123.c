#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("�����l1	");
	scanf("%lf", p_a);
	printf("�����l2	");
	scanf("%lf", p_b);

	if (*p_a > *p_b)
	{
		printf("�傫���ق���%f�ł���\n", *p_a);
	}
	else
	{
		printf("�傫���ق���%f�ł���\n", *p_b);
	}
}