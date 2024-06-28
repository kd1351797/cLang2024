#include<stdio.h>
main()
{
	float su1, su2, su3;

	printf("1‚Â–Ú‚ÌÀ”:");
	scanf("%f", &su1);

	printf("2‚Â–Ú‚ÌÀ”:");
	scanf("%f", &su2);

	printf("3‚Â–Ú‚ÌÀ”:");
	scanf("%f", &su3);

	float goukei = su1 + su2 + su3;
	printf("‡Œv = %.2f •½‹Ï = %.2f", goukei, goukei / 3);
}