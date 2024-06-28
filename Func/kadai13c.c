#include<stdio.h>
void change(int* data1, int* data2);

main()
{
	int a = 10;
	int b = 20;

	printf("関数実行前の値\n");
	printf("a = %d\tb = %d\n", a, b);

	change(&a, &b);

	printf("関数実行後の値\n");
	printf("a = %d\tb = %d\n", a, b);
}

void change(int* data1, int* data2)
{
	int w;
	w = *data1;
	*data1 = *data2;
	*data2 = w;
}