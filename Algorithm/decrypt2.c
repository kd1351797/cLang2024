#include<stdio.h>
main()
{
	char s[21];
	int k[21], i = 0;

	printf("���������͂��Ă������� :");
	scanf("%s", &s[0]);

	while (s[i] != '\0')
	{
		printf("s[%d]�̕������L�[ :",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i++;
	}

	printf("�������ςݕ������%s\n", &s[0]);
}