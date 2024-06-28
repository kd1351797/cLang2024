#include<stdio.h>
main()
{
	int a = 5, b = 30, wrk;
	int* p_a = &a, * p_b = &b, * p_wrk = &wrk;

	//実行前の値表示
	puts("実行前");
	printf("a = %d b = %d\n", *p_a, *p_b);
	
	//アドレス交換による入れ替え
	p_wrk = p_a;
	p_a = p_b;
	p_b = p_wrk;

	//実行後の値表示
	puts("実行後");
	printf("a = %d b = %d\n", *p_a, *p_b);
}