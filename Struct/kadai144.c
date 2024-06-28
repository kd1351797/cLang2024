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

	printf("¤•i–¼:\t\t%s\n", p->name);
	printf("‰¿Ši:\t\t%d‰~\n", p->price);
	printf("‚¨‘E‚ß“x:\t");
	for (i = 0; i < p->point; i++)
	{
		printf("š ");
	}
	printf("\nŒÂ”:\t\t%dŒÂ\n", p->number);
	printf("‹àŠz:\t\t%d‰~\n", p->total);
}