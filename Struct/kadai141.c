#include<stdio.h>
struct kobedenshi
{
	char course[100];
	char subject[20];
	int	credit_units;
};

main()
{
	struct kobedenshi enrollment = { "�Q�[���\�t�g�T�R�[�X","C����",8 };
	printf("�R�[�X�� ;%s\n", enrollment.course);
	printf("���Ȗ�	 ;%s\n", enrollment.subject);
	printf("�P�ʐ�	 ;%d\n", enrollment.credit_units);


}