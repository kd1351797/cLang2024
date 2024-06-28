#include<stdio.h>
main()
{
	int num1, num2, syo, jo;
	printf("®”@‚P:");
	scanf("%d", &num1);
	printf("®”@‚Q:");
	scanf("%d", &num2);
	syo = num1 / num2;
	jo = num1 % num2;

	while (1)
	{
		if (num1 == -999 || num2 == -999)break;
		if (num2 == 0)continue;
		printf("%d / %d = %d ‚ ‚Ü‚è%d\n", num1, num2, syo, jo);
		printf("®”@‚P:");
		scanf("%d", &num1);
		printf("®”@‚Q:");
		scanf("%d", &num2);
		syo = num1 / num2;
		jo = num1 % num2;
	}
}