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
		printf("�ō����_�@���O : %s�@�n�C�X�R�A : %d\n", max_name, max_score);
	}
	else
	{
		printf("�t�@�C���ɓǂݍ��߂܂���B\n");
		return;
	}

	printf("�v���C���[�� :");
	scanf("%s", name);

	while (1)
	{
		printf("���݂̃X�R�A : %d ('e'�ŏI��)\n", score);
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
			printf("�n�C�X�R�A�X�V�I\n");
		}
		else
		{
			printf("�t�@�C���ɏ������߂܂���\n");
			return;
		}

	}
}