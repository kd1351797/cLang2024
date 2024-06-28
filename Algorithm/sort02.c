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


	printf("バブルソート\n\n");
	printf("整列前\n");
	for (i = 0; i < SIZE; i++)
	{
		d[i] = rand() % 100;
		printf("%2d ", d[i]);
	}
	printf("\n");

	//バブルソート（隣接交換法）
	for (i = SIZE - 1; i > 0 - 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j+1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
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