#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//ここの数字を変えるだけで配列サイズの変更が可能
#define SIZE 5 

main()
{
	int d[SIZE];
	int i, j,w;
	srand(time(0));


	printf("基本選択法\n\n");
	printf("整列前\n");
	for (i = 0; i < SIZE; i++)
	{
		d[i] = rand() % 100;
		printf("%2d ", d[i]);
	}
	printf("\n");

	//基本選択法
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

	printf("\n整列後\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d ", d[i]);
	}
	printf("\n");
}