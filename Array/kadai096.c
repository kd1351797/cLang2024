#include<stdio.h>
main()
{
	int c[10], i, num;

	for (i = 0; i < 10; i++)
	{
		printf("��������� :");
		scanf("%d", &num);
		c[i] = num;
		if (num == -999)break;
	}

	printf("�z��c = ");
	for (i = 0; i < 10; i++)
	{
		if (c[i] == -999)break;
		printf("%d ", c[i]);
	}
	printf("\n");
}