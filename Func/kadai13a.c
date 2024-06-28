#include<stdio.h>
long bekijyou(int a, int b);

main()
{
	int a, b, kotae;
	printf("数値１　：");
	scanf("%d", &a);
	printf("数値２　：");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%dの%d乗は%dである。\n", a, b, kotae);
}

long bekijyou(int a, int b)
{
	int i ,result;
	for (i = 0,result = a; i < b - 1; i++)
	{
		result *= a;
	}

	return(result);
}