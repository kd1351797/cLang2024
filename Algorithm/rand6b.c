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

		//0�`2�ɕ␳
		player -= 1;

		//�v���C���[�̎�̕\��
		if (player == 0)
		{
			printf("�v���C���[�́A�O�[���o���܂����B\n");
		}
		if (player == 1)
		{
			printf("�v���C���[�́A�`���L���o���܂����B\n");
		}
		if(player == 2)
		{
			printf("�v���C���[�́A�p�[���o���܂����B\n");
		}
		
		//CPU�̎�̕\��
		if (cpu == 0)
		{
			printf("�R���s���[�^�́A�O�[���o���܂����B\n");
		}
		if (cpu == 1)
		{
			printf("�R���s���[�^�́A�`���L���o���܂����B\n");
		}
		if(cpu == 2)
		{
			printf("�R���s���[�^�́A�p�[���o���܂����B\n");
		}

		//���s����
		if (player == cpu)
		{
			printf("���������ł�\n\n");
		}
		if ((player + 1) % 3 == cpu)
		{
			printf("���Ȃ��̏����ł�\n\n");
		}
		if ((cpu + 1) % 3 == player)
		{
			printf("���Ȃ��̕����ł�\n\n");
		}
	}

}