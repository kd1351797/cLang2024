#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int s, i;
	int d[] = { 10, 5,30,77,16,3,47,29,37,33 };

	printf("\n�T���l����� :");
	scanf("%d", &s);

	//�T��
	for (i = 0; i < 10; i++)
	{
		if (d[i] == s)
		{
			break;
		}
	}

	//�m�F
	if (i == 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�T���l%d���Ad[%d]�Ŕ������܂���\n",s,i);
	}
}