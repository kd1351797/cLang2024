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

		printf("è§ïiñº:\t\t%s\n", (p + i)->name);
		printf("âøäi:\t\t%dâ~\n", (p + i)->price);
		printf("Ç®ëEÇﬂìx:\t%dÉ|ÉCÉìÉg\n",(p+i)->point);
		printf("\nå¬êî:\t\t%då¬\n", (p + i)->number);
		printf("ã‡äz:\t\t%dâ~\n\n", (p + i)->total);
	}

	printf("çáåvã‡äz = %dâ~\n", cost_sum);

}