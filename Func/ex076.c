#include<stdio.h>
void get_sumavg(int x, int y, int* sum, float* avg);

main()
{
	int a, b, c;
	float d;
	printf("®”‚Q‚Â“ü—Í :");
	scanf("%d%d", &a, &b);
	get_sumavg(a, b, &c, &d);
	printf("‡Œv = %d\t•½‹Ï = %.2f\n", c, d);
}

void get_sumavg(int x, int y, int* sum, float* avg)
{
	*sum = x + y;
	*avg = *sum / 2.0;

	return;
}