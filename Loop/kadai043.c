#include<stdio.h>
main()
{
	int num;
	char moji;

	printf("�����R�[�h :");
	scanf("%d", &num);
	printf("%c\n", (char)num);
	
	while (num != -1)
	{
		printf("�����R�[�h :");
		scanf("%d", &num);
		printf("%c\n", (char)num);
	}
}