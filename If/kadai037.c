#include<stdio.h>
main()
{
	int no;
	printf("�O����P�O�O�܂ł̐��������");
	scanf("%d", &no);

	if (no >= 90)
	{
		printf("���茋�ʂ�[5]�ł�\n");
	}
	else
	{
		if (no >= 80)
		{
			printf("���茋�ʂ�[4]�ł�\n");
		}
		else
		{
			if (no >= 50)
			{
				printf("���茋�ʂ�[3]�ł�\n");
			}
			else
			{
				if (no >= 30)
				{
					printf("���茋�ʂ�[2]�ł�\n");
				}
				else
				{
					printf("���茋�ʂ�[1]�ł�\n");
				}
			}
		}
	}
}