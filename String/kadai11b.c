#include<stdio.h>
main()
{
	char day[7][10] = { "sunday",
						"monday",
						"tuesday",
						"wendesday",
						"thursday",
						"friday",
						"saturday" };
	int i, j, num;

	printf("数値を入力 (0～6)	:");
	scanf("%d", &num);
	if (num >= 0 && num <= 6)
	{
		for (i = 0; i != num; i++);
		for (j = 0; day[i][j] != '\0'; j++)
		{
			printf("%c", day[i][j]);
		}
		printf("\0\n");
		
	}
	else
	{
		printf("エラー。");
	}
}