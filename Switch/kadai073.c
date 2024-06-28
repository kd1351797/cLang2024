#include<stdio.h>
main()
{
	int num;
	char moji;

	printf("アルファベット(o or h or d) :");
	scanf("%c", &moji);
	printf("１０進整数 :");
	scanf("%d", &num);
	

	switch (moji)
	{
	case'o':
		printf("%o\n", num);
		break;
	case'h':
		printf("%x\n", num);
		break;
	default:
		printf("%d\n", num);
	}
}