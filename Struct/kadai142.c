#include<stdio.h>
struct kobedenshi
{
	char course[100];
	char subject[20];
	int	credit_units;
};

main()
{
	struct kobedenshi enrollment[3];
	struct kobedenshi* p;
	p = enrollment;

	printf("�R�[�X�� ;");
	scanf("%s", p->course);
	printf("���Ȗ��@ ;");
	scanf("%s", p->subject);
	printf("�P�ʐ��@ ;");
	scanf("%d", &p->credit_units);


	printf("�R�[�X�� ;%s\n", p->course);
	printf("���Ȗ�	 ;%s\n", p->subject);
	printf("�P�ʐ�	 ;%d\n", p->credit_units);


}