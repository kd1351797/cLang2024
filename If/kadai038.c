#include<stdio.h>
main()
{
	char moji;
	printf("�P�������� :");
	scanf("%c", &moji);

	if (moji >= 0x41 && moji <= 0x5A)
	{
		printf("�ϊ����ʂ�%c�ł��B\n", moji + 0x20);
	}
	else if (moji >= 0x61 && moji <= 0x7A)
	{
		printf("�ϊ����ʂ�%c�ł��B\n", moji - 0x20);
	}
	else
	{
		printf("ERROR\n");
	}
}