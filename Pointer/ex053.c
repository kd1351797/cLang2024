#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* pa = &a, * pb = &b, * w;

	printf("実行前 : *pa = %d\t*pb = %d\n", *pa, *pb);

	//入れ替え処理
	w = pa;
	pa = pb;
	pb = w;

	printf("実行後 : *pa = %d\t*pb = %d\n", *pa, *pb);
}