#include<stdio.h>
main()
{
	char s[20];
	int i = 0;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :");
	scanf("%s", &s[0]);

	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}

	printf("•¡‡‰»•¶š—ñ‚Í%s\n", &s[0]);
}