#include<stdio.h>
int hikaku(char a);

main()
{
	char a;
	printf("�A���t�@�x�b�g�ꕶ���H :");
	scanf("%c", &a);
	if (hikaku(a) == 0)
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������́A�������ł�\n",hikaku(a));
	}
	else
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������́A�啶���ł�\n",hikaku(a));
	}

}

int hikaku(char a)
{
	if (a >= 0x61 && a <= 0x7a)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}