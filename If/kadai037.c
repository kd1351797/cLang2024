#include<stdio.h>
main()
{
	int no;
	printf("０から１００までの整数を入力");
	scanf("%d", &no);

	if (no >= 90)
	{
		printf("判定結果は[5]です\n");
	}
	else
	{
		if (no >= 80)
		{
			printf("判定結果は[4]です\n");
		}
		else
		{
			if (no >= 50)
			{
				printf("判定結果は[3]です\n");
			}
			else
			{
				if (no >= 30)
				{
					printf("判定結果は[2]です\n");
				}
				else
				{
					printf("判定結果は[1]です\n");
				}
			}
		}
	}
}