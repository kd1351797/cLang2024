#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット ");
	scanf("%c", &moji);
	switch (moji)
	{
	case'a':
		printf("America\nAustralia\n");
		break;
	case'e':
		printf("England\n");
		break;
	case'f':
		printf("France\n");
		break;
	case'j':
		printf("Japan\n");
		break;
	default:
		printf("エラー\n");
	}
}