#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa = &a, * pb = &b, * w;

	printf("���s�O : *pa = %d\t*pb = %d\n", *pa, *pb);

	//����ւ�����
	w = pa;
	pa = pb;
	pb = w;

	printf("���s�� : *pa = %d\t*pb = %d\n", *pa, *pb);
}