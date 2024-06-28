#include<stdio.h>
main()
{
	char data;

	printf("文字（^Zで終了）");
	while(scanf("%c",&data) != EOF)
	{
		printf("%c\n", data);
		printf("文字（^Zで終了）");
		scanf("%c", &data);

	}
}