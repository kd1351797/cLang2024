#include<stdio.h>
main()
{
	char m;
	printf("������� :");
	scanf("&d", &m);

	if (m == 2)
	{
		printf("�ŏI����28��");
	}
	else
	{
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			printf("�ŏI����30��");
		}
		else
		{
			printf("�ŏI����31��");
		}
	}
}