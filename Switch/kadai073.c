#include<stdio.h>
main()
{
	int num;
	char moji;

	printf("�A���t�@�x�b�g(o or h or d) :");
	scanf("%c", &moji);
	printf("�P�O�i���� :");
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