#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット ?");
	scanf("%c", &moji);

	if (moji >= 0x41 && moji <= 0x5A)
	{
		printf("その文字は大文字です\n");
	}
	else if (moji >= 0x61 && moji <= 0x7A)
	{
		printf("その文字は小文字です\n");
	}
	else
	{
		printf("エラー。アルファベットを入力してください。\n");
	}
}