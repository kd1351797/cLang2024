#include<stdio.h>
main()
{
	char s[20];
	int i,n;

	printf("文字列を入力してください :");
	scanf("%s", &s[0]);
	printf("秘密の数を教えてください :");
	scanf("%d", &n);

	i = 0;
	while (s[i] != '\0')
	{
		s[i] += n;
		i++;
	}

	printf("暗号化すると : %s\n", &s[0]);
}