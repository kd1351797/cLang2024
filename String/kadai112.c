#include<stdio.h>
main()
{
	char data1[] = { "abcde" };
	char data2[10];
	int i;

	for (i = 0; data1[i] != '\0'; i++)
	{
		data2[i] = data1[i];
	}
	data2[i] = '\0';

	printf("(�R�s�[���j%s\n", data1);
	printf("(�R�s�[��j%s\n", data2);
}