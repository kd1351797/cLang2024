#include<stdio.h>
main()
{
	char m;
	printf("Œ‚ğ“ü—Í :");
	scanf("&d", &m);

	if (m == 2)
	{
		printf("ÅI“ú‚Í28“ú");
	}
	else
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("ÅI“ú‚Í30“ú");
		}
		else
		{
			printf("ÅI“ú‚Í31“ú");
		}
	}
}