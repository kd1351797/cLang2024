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
	int i, cost_sum = 0;
	struct fruit syohin[] = { {"peach",300,5,3,0},
								{"grape",200,4,10,0},
								{"watermelon",1500,5,8,0} };
	struct fruit* p;
	p = syohin;

	for (i = 0; i < 3; i++)
	{
		(p + i)->total = (p + i)->price * (p + i)->number;
		cost_sum += (p + i)->total;

		printf("���i��:\t\t%s\n", (p + i)->name);
		printf("���i:\t\t%d�~\n", (p + i)->price);
		printf("���E�ߓx:\t%d�|�C���g\n",(p+i)->point);
		printf("\n��:\t\t%d��\n", (p + i)->number);
		printf("���z:\t\t%d�~\n\n", (p + i)->total);
	}

	printf("���v���z = %d�~\n", cost_sum);

}