//���s�e�X�g
#include<stdio.h>

#define SIZE 5

main()
{
	int d[SIZE];
	int i, j, w, s;

	for (i = 0; i < SIZE; i++)
	{
		printf("��������� ", i);
		scanf("%d", &s);
		d[i] = s;
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
	printf("�����ŕ��ѕς����\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d\n", d[i]);
	}

}