#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa = &a, * pb = &b, * w;

	printf("Às‘O : *pa = %d\t*pb = %d\n", *pa, *pb);

	//“ü‚ê‘Ö‚¦ˆ—
	w = pa;
	pa = pb;
	pb = w;

	printf("ÀsŒã : *pa = %d\t*pb = %d\n", *pa, *pb);
}