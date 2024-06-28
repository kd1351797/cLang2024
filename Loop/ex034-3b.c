//ex034-3.cのカウントアップ型
#include<stdio.h>
main()
{
	int j, i, su;

	printf("数は？");
	scanf("%d", &su);

	i = 1;
	do
	{
		j = 0;
		do
		{
			printf("*");
			j++;
		}while (j < i);

		printf("\n");
		i++;
	}while (i <= su);
}