#include<stdio.h>
main()
{
	char* p = "Nippon";
	int i;

	for (i = 0; *p != '\0'; i++, p++);

	printf("�t���ɕ\������� :");
	for (; i >= 0; i--, p--)
	{
		printf("%c", *p);
	}
}