#include<stdio.h>
main()
{
	char moji;
	printf("１文字入力 :");
	scanf("%c", &moji);

	if (moji >= 0x41 && moji <= 0x5A)
	{
		printf("変換結果は%cです。\n", moji + 0x20);
	}
	else if (moji >= 0x61 && moji <= 0x7A)
	{
		printf("変換結果は%cです。\n", moji - 0x20);
	}
	else
	{
		printf("ERROR\n");
	}
}