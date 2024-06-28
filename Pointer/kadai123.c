#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("ŽÀ”’l1	");
	scanf("%lf", p_a);
	printf("ŽÀ”’l2	");
	scanf("%lf", p_b);

	if (*p_a > *p_b)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f‚Å‚ ‚é\n", *p_a);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f‚Å‚ ‚é\n", *p_b);
	}
}