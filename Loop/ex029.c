#include<stdio.h>
main()
{
	int num, i;

	printf("数を入れて");
	scanf("%d", &num);

	i = 0;

	while (num > i)
	{
		printf("*");
		i++;
	}
}