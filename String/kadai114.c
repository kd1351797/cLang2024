#include<stdio.h>
#define SIZE 20
main()
{
	char data[SIZE];
	int i;
	printf("•¶Žš—ñ :");
	scanf("%s",data);

	for (i = 0; data[i] != '\0'; i++);
	printf("%s\n", data);
	printf("%d•¶Žš\n", i);
}