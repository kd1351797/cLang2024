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
	struct fruit* p;
	p = &syohin;

	p->total = p->price * p->number;

	printf("���i��:\t\t%s\n", p->name);
	printf("���i:\t\t%d�~\n", p->price);
	printf("���E�ߓx:\t");
	for (i = 0; i < p->point; i++)
	{
		printf("�� ");
	}
	printf("\n��:\t\t%d��\n", p->number);
	printf("���z:\t\t%d�~\n", p->total);
}