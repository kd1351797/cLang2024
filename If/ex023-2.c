#include<stdio.h>
main()
{
	int y, r;

	printf("西暦を入力 :");
	scanf("%d", &y);

	r = y % 4;

	if (r == 0)
	{
		printf("閏年です");
	}
	else
	{
		printf("閏年ではありません");
	}
}