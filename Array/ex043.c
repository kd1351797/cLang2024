#include<stdio.h>
//#include<string.h>
main()
{
	char str[] = "orange";
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	printf("文字列 : %s\n", str);
	printf("文字数は%d文字\n", i);
	//printf("文字数は%d文字\n", strlen(str));
}