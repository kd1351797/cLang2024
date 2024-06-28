#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int i, j, w, min, max, * p_data;
	p_data = data;

	printf("配列の内容\n配列data[] = ");
	for (i = 0; i < 9; i++, p_data++)
	{
		printf("%d ", *p_data);
	}

	for (i = 0; i < 8; i++)
	{
		for (j = i+1; j < 9; j++)
		{
			if (data[i] > data[j])
			{
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}

	p_data = data;
	min = *(p_data);
	max = *(p_data + 8);

	printf("\n最大値 = %d\n", max);
	printf("最小値 = %d\n", min);

}