#include<stdio.h>
main()
{
	int i;
	char moji[20];
	printf("•¶š—ñ‚ÍH :");
	scanf("%s", moji);
	for (i = 0;moji[i]	!= '\0'; i++)
	{
		putchar(moji[i]);
		printf("\n");
	}
	printf("\0\n");
}