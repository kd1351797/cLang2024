#include<stdio.h>
main()
{
	int i, s;
	int d[] = {10,5,30,77,16,3,47,29,37,33,0};

	printf("探索値を入力 :");
	scanf("%d", &s);

	for (d[10] = s, i = 0; d[i] != s; i++);

	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索値%dはd[%d]で発見\n", s, i);
	}
}