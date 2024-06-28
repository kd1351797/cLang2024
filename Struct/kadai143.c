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

	printf("è§ïiñº:\t\t%s\n", syohin.name);
	printf("âøäi:\t\t%dâ~\n", syohin.price);
	printf("Ç®ëEÇﬂìx:\t");
	for (i = 0; i < syohin.point; i++)
	{
		printf("Åö ");
	}
	printf("\nå¬êî:\t\t%då¬\n", syohin.number);
	printf("ã‡äz:\t\t%dâ~\n", syohin.total);
}