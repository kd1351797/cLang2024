#include<stdio.h>
main()
{
	char c, * c_p;
	c_p = &c;

	printf("１文字入力 :");
	scanf("%c", c_p	);
	printf("その次の文字は%c\n", *c_p + 0x1);
}