#include<stdio.h>
main()
{
	char moji[50];
	int kazu,i;

	printf("回数と文字列を入力 :");
	scanf("%d%s", &kazu, &moji[0]);

	for (i = 0; i < kazu; i++)
	{
		printf("%s", &moji[0]);
	}
}