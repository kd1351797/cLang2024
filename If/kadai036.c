#include<stdio.h>
main()
{
	int a, b;
	printf("����a :");
	scanf("%d", &a);
	printf("����b�@:");
	scanf("%d", &b);

	if (a > b)
	{
		printf("a�̂ق���b���%d�傫��\n", a - b);
	}
	else if (a < b)
	{
		printf("a�̂ق���b���%d������\n", b - a);
	}
	else
	{
		printf("a��b�͓�����\n");
	}
}