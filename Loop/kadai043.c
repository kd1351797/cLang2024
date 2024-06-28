#include<stdio.h>
main()
{
	int num;
	char moji;

	printf("文字コード :");
	scanf("%d", &num);
	printf("%c\n", (char)num);
	
	while (num != -1)
	{
		printf("文字コード :");
		scanf("%d", &num);
		printf("%c\n", (char)num);
	}
}