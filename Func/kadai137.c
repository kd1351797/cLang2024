#include<stdio.h>
int hikaku(char a);

main()
{
	char a;
	printf("アルファベット一文字？ :");
	scanf("%c", &a);
	if (hikaku(a) == 0)
	{
		printf("戻り値は%dなので入力した文字は、小文字です\n",hikaku(a));
	}
	else
	{
		printf("戻り値は%dなので入力した文字は、大文字です\n",hikaku(a));
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