#include<stdio.h>
main()
{
	int a, b, w;
	int* pa, * pb;

	a = 100;
	b = 200;

	printf("実行前 : a = %d\tb = %d\n", a, b);

	pa = &a;
	pb = &b;

	//入れ替え処理
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("実行後 : a = %d\tb = %d\n", a, b);
}