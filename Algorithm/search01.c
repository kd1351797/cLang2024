#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int s, i;
	int d[] = { 10, 5,30,77,16,3,47,29,37,33 };

	printf("\n探索値を入力 :");
	scanf("%d", &s);

	//探索
	for (i = 0; i < 10; i++)
	{
		if (d[i] == s)
		{
			break;
		}
	}

	//確認
	if (i == 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索値%dを、d[%d]で発見しました\n",s,i);
	}
}