#include<stdio.h>
main()
{
	char s[20];
	int i,n;

	printf("���������͂��Ă������� :");
	scanf("%s", &s[0]);
	printf("�閧�̐��������Ă������� :");
	scanf("%d", &n);

	i = 0;
	while (s[i] != '\0')
	{
		s[i] += n;
		i++;
	}

	printf("�Í�������� : %s\n", &s[0]);
}