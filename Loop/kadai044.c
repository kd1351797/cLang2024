#include<stdio.h>
main()
{
	int num;
	printf("整数を入力 :");
	scanf("%d", &num);
	printf("８進数 = %o\t16進数 = %x\n", num, num);

	while (num != -999)
	{
		printf("整数を入力 :");
		scanf("%d", &num);
		printf("８進数 = %o\t16進数 = %x\n", num, num);
	}
}