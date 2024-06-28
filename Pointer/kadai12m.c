#include<stdio.h>
main()
{
	char str1[128];
	char str2[128];

	char* p_str1, * p_str2;

	printf("•¶Žš—ñ‚P :");
	scanf("%s", str1);
	printf("•¶Žš—ñ‚Q :");
	scanf("%s", str2);

	for (p_str1 = str1; *p_str1 != '\0'; p_str1++);
	for (p_str2 = str2; *p_str2 != '\0'; p_str1++,p_str2++)
	{
		*p_str1 = *p_str2;
	}

	printf("str1 :");
	for (p_str1 = str1; *p_str1 != '\0'; p_str1++)
	{
		printf("%c", *p_str1);
	}

}