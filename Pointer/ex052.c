#include<stdio.h>
main()
{
	int a, b, w;
	int* pa, * pb;

	a = 100;
	b = 200;

	printf("���s�O : a = %d\tb = %d\n", a, b);

	pa = &a;
	pb = &b;

	//����ւ�����
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("���s�� : a = %d\tb = %d\n", a, b);
}