#include<stdio.h>
main()
{
	int num1, num2;
	char moji;

	printf("‰‰Zq :");
	scanf("%c", &moji);
	printf("®”‚P :");
	scanf("%d", &num1);
	printf("®”‚Q :");
	scanf("%d", &num2);


	switch (moji)
	{
	case'+':
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case'-':
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case'*':
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case'/':
		printf("%d / %d = %d\n", num1, num2, num1 / num2);
		break;
	default:
		printf("ƒGƒ‰[\n");
	}
}