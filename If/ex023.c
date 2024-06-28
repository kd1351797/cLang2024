#include <stdio.h>
main()
{
	int h, m, s;

	printf("秒数を入力 : ");
	scanf("%d", &s);

	if (s <= 5000)
	{
		h = s / 3600;
		m = s / 60;
		s = s % 3600 % 60;
		printf("%d時間%d分%d秒", h, m, s);
	}
	else
	{
		printf("入力エラー。5000以下の数字で記入してください。");
	}
}