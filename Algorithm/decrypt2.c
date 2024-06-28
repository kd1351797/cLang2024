#include<stdio.h>
main()
{
	char s[21];
	int k[21], i = 0;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :");
	scanf("%s", &s[0]);

	while (s[i] != '\0')
	{
		printf("s[%d]‚Ì•œ†‰»ƒL[ :",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}

	printf("•œ†‰»Ï‚İ•¶š—ñ‚Í%s\n", &s[0]);
}