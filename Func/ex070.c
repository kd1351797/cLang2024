#include<stdio.h>
int add(int a, int b);					//プロトタイプ宣言
int hiku(int a, int b);					//プロトタイプ宣言
int kake(int a, int b);
int wari(int a, int b);

main()
{
	int a, b, kotae;
	printf("整数を2つ入力 :");
	scanf("%d%d", &a, &b);
	printf("合計は%dです\n", add(a, b));
	printf("減算は%dです\n", hiku(a, b));
	printf("乗算は%dです\n", kake(a, b));
	printf("除算は%dです\n", wari(a, b));
}

//関数addの記述
int add(int a, int b)
{
	return(a + b);
}

//関数hikuの記述
int hiku(int a, int b)
{
	return(a - b);
}

int kake(int a, int b)
{
	return(a * b);
}

int wari(int a, int b)
{
	return(a / b);
}