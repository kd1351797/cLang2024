#include<stdio.h>
void join(char* data1, char* data2);

main()
{
	char moji1[256] = "�֐�";
	char moji2[] = "�킩�邩�ȁH";
	printf("�z�� moji1 = %s\n", moji1);
	printf("�z�� moji2 = %s\n", moji2);

	join(moji1, moji2);

	printf("�A�����ꂽ��̕����� moji1 : %s\n", moji1);
}

void join(char* data1, char* data2)
{
	for (; *data1 != '\0'; data1++);
	for (; *data2 != '\0'; data1++, data2++)
	{
		*data1 = *data2;
	}
	*data1 = '\0';

	return;
}