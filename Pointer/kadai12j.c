#include<stdio.h>
main()
{
	char data1[20] = { "ringo" };
	char data2[20];
	char* p_data1, * p_data2;
	int i, j;

	p_data1 = data1;
	p_data2 = data2;

	for (i = 0; *p_data1 != '\0'; i++, p_data1++);
	for (j = 0; j <= i; j++, p_data2++)
	{
		*p_data2 = *p_data1--;
	}
	*p_data2 = '\0';


	printf("”z—ñ“à—e =");
	for (p_data1 = data1; *p_data1 != '\0'; p_data1++)
	{
		printf("%c", *p_data1);
	}
	printf("\n");

	printf("‹t‡Œ‹‰Ê =");
	for ( p_data2 = data2 + 1;*p_data2 != '\0'; i++, p_data2++)
	{
		printf("%c", *p_data2);
	}
	printf("\n");
}