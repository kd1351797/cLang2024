#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����l ?");
	scanf("%lf%lf", &a, &b);

	printf("*** %f �� %f �� �l�����Z ***\n", a, b);
	printf("�a = %f\n", a + b);
	printf("�� = %f\n", a - b);
	printf("�� = %f\n", a * b);
	printf("�� = %f\n", a / b);
}