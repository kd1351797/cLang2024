#include<stdio.h>
main()
{
	int i, j;
	float sum, x[3][2];

	for (i = 0; i < 3; i++)
	{
		for (j = 0, sum = 0; j < 2; j++)
		{
			printf("x[%d][%d] = ",i,j);
			scanf("%f", &x[i][j]);
			sum += x[i][j];
		}

		printf("%d�s�ڂ̕��� = %.2f\n\n", i, sum / j);
	}
}