#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[21];
	int k[21], i, n;

	srand(time(0));

	printf("���������͂��Ă������� :");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0')
	{
		k[i] = rand() % 10;
		s[i] += k[i];
		i++;
	}

	printf("�Í���������́u%s�v\n",&s[0]);
	printf("�Í��L�[�́u");

	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}

	printf("�v\n");
}