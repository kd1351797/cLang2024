#include<stdio.h>
main()
{
	char data[] = { "mikan*to*ringo" };
	char* p_data;

	printf("�󔒂��������z����e =");
	for (p_data = data; *p_data != '\0'; p_data++)
	{
		if (*p_data != '*')
		{
			printf("%c", *p_data);
		}
	}
	printf("\n");
}