#include<stdio.h>
main()
{
	long int i;
	printf("整数？");
	scanf("%ld", &i);
	printf("２倍すると%ld\n", i * 2);
	printf("３倍すると%ld\n", i * 3);
	printf("４倍すると%ld\n", i * 4);
}