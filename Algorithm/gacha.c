//gacha.c
//�K�`���̃v���O����
//�ϐ�kazu��0�`99�̐�����ꂻ�ꂪ5��菬������΃X�[�p�[���A�A����ȊO�����A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu, i, q, p;

	srand(time(0));

	printf("SSR�o���������H");
	scanf("%d", &p);

	printf("���A�񂷁H ");
	scanf("%d", &q);

	for (i = 0; i < q; i++)
	{
		kazu = rand() % 100;

		if (kazu < p)
		{
			printf("SSR\n");
		}
		else
		{
			printf("R\n");
		}
	}
}