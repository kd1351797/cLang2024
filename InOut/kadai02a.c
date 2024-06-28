#include<stdio.h>
main()
{
	double a, b;
	printf("2‚Â‚ÌÀ”’l ?");
	scanf("%lf%lf", &a, &b);

	printf("*** %f ‚Æ %f ‚Ì l‘¥‰‰Z ***\n", a, b);
	printf("˜a = %f\n", a + b);
	printf("· = %f\n", a - b);
	printf("Ï = %f\n", a * b);
	printf("¤ = %f\n", a / b);
}