#include<stdio.h>
main()
{
	char s[20];
	int i,n;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :");
	scanf("%s", &s[0]);
	printf("”é–§‚Ì”‚ğ‹³‚¦‚Ä‚­‚¾‚³‚¢ :");
	scanf("%d", &n);

	i = 0;
	while (s[i] != '\0')
	{
		s[i] += n;
		i++;
	}

	printf("ˆÃ†‰»‚·‚é‚Æ : %s\n", &s[0]);
}