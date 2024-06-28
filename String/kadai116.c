#include<stdio.h>
main()
{
	char data1[40];
	char data2[20];
	int i, j;

	printf("•¶Žš—ñ‚P :");
	scanf("%s", data1);
	printf("•¶Žš—ñ‚Q :");
	scanf("%s", data2);

	for (i = 0; data1[i] != '\0'; i++);
	for (j = 0; data2[j] != '\0'; i++,j++)
	{
		data1[i] = data2[j];
	}
	data1[i] = '\0';

	printf("%s\n", data1);
}