#include<stdio.h>
main()
{
	int i, s;
	int d[] = {10,5,30,77,16,3,47,29,37,33,0};

	printf("�T���l����� :");
	scanf("%d", &s);

	for (d[10] = s, i = 0; d[i] != s; i++);

	if (i >= 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�T���l%d��d[%d]�Ŕ���\n", s, i);
	}
}