#include<stdio.h>
main()
{
	char data[20], * p_data;
	int i;
	printf("•¶š—ñ(^Z‚ÅI—¹)");
	while (scanf("%s", data) != EOF)
	{
		for (i = 0, p_data = data; *p_data != '\0'; p_data++, i++);
		for (; i >= 0; p_data--, i--)
		{
			printf("%c", *p_data);
		}
		printf("\n•¶š—ñ(^Z‚ÅI—¹)");
	}
}