#include<stdio.h>
main()
{
	char m;
	printf("月を入力 :");
	scanf("&d", &m);

	if (m == 2)
	{
		printf("最終日は28日");
	}
	else
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("最終日は30日");
		}
		else
		{
			printf("最終日は31日");
		}
	}
}