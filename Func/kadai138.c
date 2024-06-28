#include<stdio.h>
void showStars(int size);

main()
{
	int num;
	printf("®”@:");
	scanf("%d", &num);
	showStars(num);
}

void showStars(int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("*");
	}
	printf("\n");

	return;
}