#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int player, cpu, i, num;
	

	srand(time(0));

	printf("���񏟕��H");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		cpu = rand() % 3;

		printf("�����o���܂����H");
		printf("(1:�O�[�@2:�`���L 3:�p�[)");
		scanf("%d", &player);

		//�v���C���[�̎�̕\��
		if (player == 1)
		{
			printf("�v���C���[�́A�O�[���o���܂����B\n");
		}
		else if (player == 2)
		{
			printf("�v���C���[�́A�`���L���o���܂����B\n");
		}
		else
		{
			printf("�v���C���[�́A�p�[���o���܂����B\n");
		}
		
		//CPU�̎�̕\��
		if (cpu == 0)
		{
			printf("�R���s���[�^�́A�O�[���o���܂����B\n");
		}
		else if (cpu == 1)
		{
			printf("�R���s���[�^�́A�`���L���o���܂����B\n");
		}
		else 
		{
			printf("�R���s���[�^�́A�p�[���o���܂����B\n");
		}

		//���s����
		if (player == 1 && cpu == 0)
		{
			printf("���������ł�\n\n");
		}
		if (player == 1 && cpu == 1)
		{
			printf("���Ȃ��̏����ł�\n\n");
		}
		if (player == 1 && cpu == 2)
		{
			printf("���Ȃ��̕����ł�\n\n");
		}
		if (player == 2 && cpu == 0)
		{
			printf("���Ȃ��̕����ł�\n\n");
		}
		if (player == 2 && cpu == 1)
		{
			printf("���������ł�\n\n");
		}
		if (player == 2 && cpu == 2)
		{
			printf("���Ȃ��̏����ł�\n\n");
		}
		if (player == 3 && cpu == 0)
		{
			printf("���Ȃ��̏����ł�\n\n");
		}
		if (player == 3 && cpu == 1)
		{
			printf("���Ȃ��̕����ł�\n\n");
		}
		if (player == 3 && cpu == 2)
		{
			printf("���������ł�\n\n");
		}
	}

}