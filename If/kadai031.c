#include<stdio.h>

main()
{
	float a, b;
	printf("２つの実数値は？");
	scanf("%f%f", &a, &b);

	if (a > b)
	{
		printf("大きいほうは = %f\n", a);
	}
	else
	{
		printf("大きいほうは = %f\n", b);
	}
}