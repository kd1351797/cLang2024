#include<stdio.h>
main()
{
	int score = 0, max_score = 0;
	char ch, name[20], max_name[20];
	FILE* fp;

	if (fp = fopen("f_score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("最高得点　名前 : %s　ハイスコア : %d\n", max_name, max_score);
	}
	else
	{
		printf("ファイルに読み込めません。\n");
		return;
	}

	printf("プレイヤー名 :");
	scanf("%s", name);

	while (1)
	{
		printf("現在のスコア : %d ('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e')break;

		score++;
	}

	if (score > max_score)
	{
		if (fp = fopen("f_score.txt", "w"))
		{
			fprintf(fp, "%d\n", score);
			fprintf(fp, "%s\n", name);
			fclose(fp);
			printf("ハイスコア更新！\n");
		}
		else
		{
			printf("ファイルに書き込めません\n");
			return;
		}

	}
}