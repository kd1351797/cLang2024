#include<stdio.h>
main()
{
	int num, i;
	printf("®”@F");
	scanf("%d", &num);

	for (i = 0; i < 11; i++, num++)
	{
		printf("%2d ", num);
	}
}