#include<stdio.h>
main()
{
	int a, b;
	printf("整数a :");
	scanf("%d", &a);
	printf("整数b　:");
	scanf("%d", &b);

	if (a > b)
	{
		printf("aのほうがbより%d大きい\n", a - b);
	}
	else if (a < b)
	{
		printf("aのほうがbより%d小さい\n", b - a);
	}
	else
	{
		printf("aとbは等しい\n");
	}
}