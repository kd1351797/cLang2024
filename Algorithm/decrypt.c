#include<stdio.h>
main()
{
	char s[20];
	int i = 0;

	printf("暗号化文字列を入力してください :");
	scanf("%s", &s[0]);

	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}

	printf("複合化文字列は%s\n", &s[0]);
}