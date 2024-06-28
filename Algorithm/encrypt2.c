#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[21];
	int k[21], i, n;

	srand(time(0));

	printf("文字列を入力してください :");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0')
	{
		k[i] = rand() % 10;
		s[i] += k[i];
		i++;
	}

	printf("暗号化文字列は「%s」\n",&s[0]);
	printf("暗号キーは「");

	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}

	printf("」\n");
}