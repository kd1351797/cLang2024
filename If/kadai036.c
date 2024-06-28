#include<stdio.h>
main()
{
	int a, b;
	printf("®”a :");
	scanf("%d", &a);
	printf("®”b@:");
	scanf("%d", &b);

	if (a > b)
	{
		printf("a‚Ì‚Ù‚¤‚ªb‚æ‚è%d‘å‚«‚¢\n", a - b);
	}
	else if (a < b)
	{
		printf("a‚Ì‚Ù‚¤‚ªb‚æ‚è%d¬‚³‚¢\n", b - a);
	}
	else
	{
		printf("a‚Æb‚Í“™‚µ‚¢\n");
	}
}