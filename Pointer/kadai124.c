#include<stdio.h>
main()
{
	char c, * c_p;
	c_p = &c;

	printf("‚P•¶Žš“ü—Í :");
	scanf("%c", c_p	);
	printf("‚»‚ÌŽŸ‚Ì•¶Žš‚Í%c\n", *c_p + 0x1);
}