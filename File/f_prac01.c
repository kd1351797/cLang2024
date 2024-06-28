#include<stdio.h>
main()
{
	int score = 0;
	char ch, name[256];
	FILE* fp;

	printf("プレイヤー名 :");
	scanf("%s", name);

	while (1)
	{
		printf("現在のスコア : %d ('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e')break;

		score++;
	}

	fp = fopen("f_score.txt", "w");
	fprintf(fp, "%s\n%d", name, score);
	fclose(fp);
}