#include<stdio.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	int i, j, k, cost_sum = 0;
	struct fruit syohin[] =  {	{"peach",300,5,3,0},
								{"grape",200,4,10,0},
								{"watermelon",1500,5,8,0} };
	for (i = 0; i < 3; i++)
	{
		syohin[i].total = syohin[i].price * syohin[i].number;
		cost_sum += syohin[i].total;

		printf("���i��:\t\t%s\n", syohin[i].name);
		printf("���i:\t\t%d�~\n", syohin[i].price);
		printf("���E�ߓx:\t");
		for (j = 0; j < syohin[i].point; j++)
		{
			printf("�� ");
		}
		if (syohin[i].point != 5)
		{
			for (k = 0; k < 5 - syohin[i].point; k++)
			{
				printf("�� ");
			}
		}
		printf("\n��:\t\t%d��\n", syohin[i].number);
		printf("���z:\t\t%d�~\n\n", syohin[i].total);
	}

	printf("���v���z = %d�~\n", cost_sum);

}