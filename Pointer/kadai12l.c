#include<stdio.h>
main()
{
	char data[30];
	char* p_data;
	int i,j;

	p_data = data;

	printf("������́H");
	gets(data);

	for (i = 0; *p_data != '\0'; i++, p_data++);

	printf("��������%d�����ł�\n",i);

}