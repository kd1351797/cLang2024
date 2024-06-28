#include<stdio.h>
main()
{
	int a, b;
	int* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	*p_a = 100;
	*p_b = 10;

	printf("%d + %d = %d\n", *p_a, *p_b, *p_a + *p_b);
	printf("%d - %d = %d\n", *p_a, *p_b, *p_a - *p_b);
	printf("%d * %d = %d\n", *p_a, *p_b, *p_a * *p_b);
	printf("%d / %d = %d\n", *p_a, *p_b, *p_a / *p_b);
}