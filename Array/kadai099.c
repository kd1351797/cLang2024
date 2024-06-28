#include<stdio.h>
main()
{
	char moji[50];
	int kazu,i;

	printf("‰ñ”‚Æ•¶š—ñ‚ğ“ü—Í :");
	scanf("%d%s", &kazu, &moji[0]);

	for (i = 0; i < kazu; i++)
	{
		printf("%s", &moji[0]);
	}
}