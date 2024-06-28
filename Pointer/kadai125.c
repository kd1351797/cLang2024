#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int i, * p_data;
	p_data = data;

	printf("ポインタを固定して表示\n");
	for (i = 0; data[i] != -999; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\nポインタを変化させて表示\n");
	for (i = 0;*p_data != -999; i++, p_data++)
	{
		printf("%d ", *p_data);
	}
	printf("\n");
}