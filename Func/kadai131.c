#include<stdio.h>
main()
{
	char data;

	printf("�����i^Z�ŏI���j");
	while(scanf("%c",&data) != EOF)
	{
		printf("%c\n", data);
		printf("�����i^Z�ŏI���j");
		scanf("%c", &data);

	}
}