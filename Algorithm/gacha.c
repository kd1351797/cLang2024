//gacha.c
//ガチャのプログラム
//変数kazuに0～99の数を入れそれが5より小さければスーパーレア、それ以外がレア

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu, i, q, p;

	srand(time(0));

	printf("SSR出現率何％？");
	scanf("%d", &p);

	printf("何連回す？ ");
	scanf("%d", &q);

	for (i = 0; i < q; i++)
	{
		kazu = rand() % 100;

		if (kazu < p)
		{
			printf("SSR\n");
		}
		else
		{
			printf("R\n");
		}
	}
}