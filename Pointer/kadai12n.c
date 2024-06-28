#include<stdio.h>
main()
{
	char* p = "Nippon";
	int i;

	for (i = 0; *p != '\0'; i++, p++);

	printf("‹t‡‚É•\Ž¦‚·‚é‚Æ :");
	for (; i >= 0; i--, p--)
	{
		printf("%c", *p);
	}
}