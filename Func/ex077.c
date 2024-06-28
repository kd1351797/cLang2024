#include<stdio.h>
void get_maxmin(int x, int y, int z, int* max, int* min);

main()
{
	int a, b, c, max, min;

	printf("®”‚ð3‚Â“ü—Í :");
	scanf("%d%d%d", &a, &b, &c);

	get_maxmin(a, b, c, &max, &min);

	printf("Å‘å’l = %d\tÅ¬’l = %d\n", max, min);
}

void get_maxmin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);

	return;
}