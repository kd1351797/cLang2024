#include<stdio.h>
main()
{
	int a, b, c;
	int* pa, * pb;

	a = 50;
	b = 10;

	pa = &a;
	pb = &b;

	c = *pa + *pb;

	printf("%d + %d = %d\n", a, b, c);
}