#include<stdio.h>
main()
{
	char* p = "Nippon";
	int i;

	for (i = 0; *p != '\0'; i++, p++);

	printf("逆順に表示すると :");
	for (; i >= 0; i--, p--)
	{
		printf("%c", *p);
	}
}