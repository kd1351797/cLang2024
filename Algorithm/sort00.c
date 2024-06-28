//実行テスト
#include<stdio.h>

#define SIZE 5

main()
{
	int d[SIZE];
	int i, j, w, s;

	for (i = 0; i < SIZE; i++)
	{
		printf("数字を入力 ", i);
		scanf("%d", &s);
		d[i] = s;
	}
	printf("\n");

	//基本挿入法
	for (i = 1; i < SIZE; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}

			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}
	printf("昇順で並び変えると\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d\n", d[i]);
	}

}