#include<stdio.h>
main()
{
	char s[20];
	int i = 0;

	printf("�Í������������͂��Ă������� :");
	scanf("%s", &s[0]);

	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}

	printf("�������������%s\n", &s[0]);
}