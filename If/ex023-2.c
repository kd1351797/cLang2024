#include<stdio.h>
main()
{
	int y, r;

	printf("¼—ï‚ğ“ü—Í :");
	scanf("%d", &y);

	r = y % 4;

	if (r == 0)
	{
		printf("‰[”N‚Å‚·");
	}
	else
	{
		printf("‰[”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}