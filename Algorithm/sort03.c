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


	printf("��{�}���@\n\n");
	printf("����O\n");
	for (i = 0; i < SIZE; i++)
	{
		d[i] = rand() % 100;
		printf("%2d ", d[i]);
	}
	printf("\n");

	//��{�}���@
	for (i = 1; i < SIZE; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			
			if (d[j + 1] >= d[j])
			{
				break;
			}

			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}

	printf("\n�����\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d ", d[i]);
	}
	printf("\n");
}