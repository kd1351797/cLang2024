#include<stdio.h>
main()
{
	char data1[20] = { "mikan" };
	char data2[20];
	char* p_data1, * p_data2;

	for (p_data1 = data1, p_data2 = data2; *p_data1 != '\0'; p_data1++, p_data2++)
	{
		*p_data2 = *p_data1;
	}
	*p_data2 = '\0';

	printf("ƒRƒs[æ‚Ì•¶š—ñ =");
	for (p_data2 = data2; *p_data2 != '\0'; p_data2++)
	{
		printf("%c", *p_data2);
	}
	*p_data2 = '\0';
	printf("\n");
}