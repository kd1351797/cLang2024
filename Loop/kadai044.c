#include<stdio.h>
main()
{
	int num;
	printf("��������� :");
	scanf("%d", &num);
	printf("�W�i�� = %o\t16�i�� = %x\n", num, num);

	while (num != -999)
	{
		printf("��������� :");
		scanf("%d", &num);
		printf("�W�i�� = %o\t16�i�� = %x\n", num, num);
	}
}