#include<stdio.h>
main()
{
	char c, * c_p;
	c_p = &c;

	printf("�P�������� :");
	scanf("%c", c_p	);
	printf("���̎��̕�����%c\n", *c_p + 0x1);
}