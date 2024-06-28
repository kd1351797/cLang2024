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


	printf("基本挿入法\n\n");
	printf("整列前\n");
	for (i = 0; i < SIZE; i++)
	{
		d[i] = rand() % 100;
		printf("%2d ", d[i]);
	}
	printf("\n");

	//基本挿入法
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

	printf("\n整列後\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d ", d[i]);
	}
	printf("\n");
}