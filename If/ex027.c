#include<stdio.h>
main()
{
	char ch;
	printf("文字を入力 :");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("変換すると%c\n", ch + 0x20);
		}
		else
		{
			printf("変換すると%c\n", ch - 0x20);
		}
	}
	else
	{
		printf("エラー\n");
	}
}