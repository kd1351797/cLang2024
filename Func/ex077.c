#include<stdio.h>
void get_maxmin(int x, int y, int z, int* max, int* min);

main()
{
	int a, b, c, max, min;

	printf("整数を3つ入力 :");
	scanf("%d%d%d", &a, &b, &c);

	get_maxmin(a, b, c, &max, &min);

	printf("最大値 = %d\t最小値 = %d\n", max, min);
}

void get_maxmin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);

	return;
}