#include<stdio.h>
void change(int* data1, int* data2);

main()
{
	int a = 10;
	int b = 20;

	printf("�֐����s�O�̒l\n");
	printf("a = %d\tb = %d\n", a, b);

	change(&a, &b);

	printf("�֐����s��̒l\n");
	printf("a = %d\tb = %d\n", a, b);
}

void change(int* data1, int* data2)
{
	int w;
	w = *data1;
	*data1 = *data2;
	*data2 = w;
}