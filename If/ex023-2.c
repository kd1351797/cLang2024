#include<stdio.h>
main()
{
	int y, r;

	printf("�������� :");
	scanf("%d", &y);

	r = y % 4;

	if (r == 0)
	{
		printf("�[�N�ł�");
	}
	else
	{
		printf("�[�N�ł͂���܂���");
	}
}