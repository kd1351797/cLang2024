#include<stdio.h>
main()
{
	float su1, su2, su3;

	printf("1つ目の実数:");
	scanf("%f", &su1);

	printf("2つ目の実数:");
	scanf("%f", &su2);

	printf("3つ目の実数:");
	scanf("%f", &su3);

	float goukei = su1 + su2 + su3;
	printf("合計 = %.2f 平均 = %.2f", goukei, goukei / 3);
}