#include<stdio.h>
void join(char* data1, char* data2);

main()
{
	char moji1[256] = "関数";
	char moji2[] = "わかるかな？";
	printf("配列 moji1 = %s\n", moji1);
	printf("配列 moji2 = %s\n", moji2);

	join(moji1, moji2);

	printf("連結された後の文字列 moji1 : %s\n", moji1);
}

void join(char* data1, char* data2)
{
	for (; *data1 != '\0'; data1++);
	for (; *data2 != '\0'; data1++, data2++)
	{
		*data1 = *data2;
	}
	*data1 = '\0';

	return;
}