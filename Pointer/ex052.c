#include<stdio.h>
main()
{
	int a, b, w;
	int* pa, * pb;

	a = 100;
	b = 200;

	printf("Às‘O : a = %d\tb = %d\n", a, b);

	pa = &a;
	pb = &b;

	//“ü‚ê‘Ö‚¦ˆ—
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("ÀsŒã : a = %d\tb = %d\n", a, b);
}