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
	int i;
	struct fruit syohin = { "peach",300,5,3,0 };
	syohin.total = syohin.price * syohin.number;

	printf("���i��:\t\t%s\n", syohin.name);
	printf("���i:\t\t%d�~\n", syohin.price);
	printf("���E�ߓx:\t");
	for (i = 0; i < syohin.point; i++)
	{
		printf("�� ");
	}
	printf("\n��:\t\t%d��\n", syohin.number);
	printf("���z:\t\t%d�~\n", syohin.total);
}