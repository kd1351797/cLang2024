#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int i, * p_data;
	p_data = data;

	printf("�|�C���^���Œ肵�ĕ\��\n");
	for (i = 0; data[i] != -999; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n�|�C���^��ω������ĕ\��\n");
	for (i = 0;*p_data != -999; i++, p_data++)
	{
		printf("%d ", *p_data);
	}
	printf("\n");
}