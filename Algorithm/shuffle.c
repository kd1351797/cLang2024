#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20], target, work, i;

	//配列の初期設定と表示
	printf("シャッフル前\n");
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
		printf("%d ", data[i]);
	}

	//シャッフルと表示
	srand(time(0));
	printf("\n\nシャッフル後\n");
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