#include<stdio.h>
int add(int a, int b);					//�v���g�^�C�v�錾
int hiku(int a, int b);					//�v���g�^�C�v�錾
int kake(int a, int b);
int wari(int a, int b);

main()
{
	int a, b, kotae;
	printf("������2���� :");
	scanf("%d%d", &a, &b);
	printf("���v��%d�ł�\n", add(a, b));
	printf("���Z��%d�ł�\n", hiku(a, b));
	printf("��Z��%d�ł�\n", kake(a, b));
	printf("���Z��%d�ł�\n", wari(a, b));
}

//�֐�add�̋L�q
int add(int a, int b)
{
	return(a + b);
}

//�֐�hiku�̋L�q
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