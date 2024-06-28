#include<stdio.h>
void showData(char data,int size);

main()
{
	char moji;
	int num;
	printf("•¶š@:");
	scanf("%c", &moji);
	printf("®”@:");
	scanf("%d", &num);
	showData(moji,num);
}

void showData(char data,int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%c",data);
	}
	printf("\n");

	return;
}