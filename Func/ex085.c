#include<stdio.h>
void link(char a[], char b[]);

main()
{
	char a[200], b[100];

	printf("�z�� a :");
	scanf("%s",a);
	printf("�z�� b :");
	scanf("%s", b);

	link(a, b);

	printf("�z�� a :%s\n", a);
}

void link(char a[], char b[])
{
	int i,j;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; i++, j++)
	{
		a[i] = b[j];
	}
	a[i] = '\0';
	return;
}