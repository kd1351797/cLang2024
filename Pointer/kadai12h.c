#include<stdio.h>
main()
{
	char data[] = { "kadai12h.c" };
	char* p_data;

	printf("”z—ñ“à—e =");
	for (p_data = data; *p_data != '\0'; p_data++)
	{
		printf("%c", *p_data);
	}
	*p_data = '\0';
	printf("\n");
}