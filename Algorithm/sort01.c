#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�����̐�����ς��邾���Ŕz��T�C�Y�̕ύX���\
#define SIZE 5 

main()
{
	int d[SIZE];
	int i, j,w;
	srand(time(0));


	printf("��{�I��@\n\n");
	printf("����O\n");
	for (i = 0; i < SIZE; i++)
	{
		d[i] = rand() % 100;
		printf("%2d ", d[i]);
	}
	printf("\n");

	//��{�I��@
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	printf("\n�����\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d ", d[i]);
	}
	printf("\n");
}