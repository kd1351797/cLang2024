#include<stdio.h>
long bekijyou(int a, int b);

main()
{
	int a, b, kotae;
	printf("���l�P�@�F");
	scanf("%d", &a);
	printf("���l�Q�@�F");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%d��%d���%d�ł���B\n", a, b, kotae);
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