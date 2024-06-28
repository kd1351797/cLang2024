#include<stdio.h>
main()
{
	int i;
	for (i = 0; 1; i++)
	{
		if (i == 20)break;
		if (i % 2 == 0)continue;
		printf("%d ", i);
	}
}