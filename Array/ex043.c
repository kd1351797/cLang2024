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

	printf("������ : %s\n", str);
	printf("��������%d����\n", i);
	//printf("��������%d����\n", strlen(str));
}