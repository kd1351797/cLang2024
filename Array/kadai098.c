#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i, j, w, max, min;



	printf("配列 = ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (data[i] > data[j])
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}

	min = data[0];
	max = data[9];

	printf("\n最大値 : %d\t最小値 : %d\n", max, min);

}