#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20], target, work, i;

	//�z��̏����ݒ�ƕ\��
	printf("�V���b�t���O\n");
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
		printf("%d ", data[i]);
	}

	//�V���b�t���ƕ\��
	srand(time(0));
	printf("\n\n�V���b�t����\n");
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;

		work = data[i];
		data[i] = data[target];
		data[target] = work;

		printf("%d ", data[i]);
	}
	printf("\n");
}