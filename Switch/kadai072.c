#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g ");
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
		printf("�G���[\n");
	}
}