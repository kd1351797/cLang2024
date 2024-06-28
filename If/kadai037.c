#include<stdio.h>
main()
{
	int no;
	printf("‚O‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”‚ð“ü—Í");
	scanf("%d", &no);

	if (no >= 90)
	{
		printf("”»’èŒ‹‰Ê‚Í[5]‚Å‚·\n");
	}
	else
	{
		if (no >= 80)
		{
			printf("”»’èŒ‹‰Ê‚Í[4]‚Å‚·\n");
		}
		else
		{
			if (no >= 50)
			{
				printf("”»’èŒ‹‰Ê‚Í[3]‚Å‚·\n");
			}
			else
			{
				if (no >= 30)
				{
					printf("”»’èŒ‹‰Ê‚Í[2]‚Å‚·\n");
				}
				else
				{
					printf("”»’èŒ‹‰Ê‚Í[1]‚Å‚·\n");
				}
			}
		}
	}
}