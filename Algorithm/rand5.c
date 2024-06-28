#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int num, i;

	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		num = rand() % 300 + 1;
		printf("%d\t", num);
	}
}