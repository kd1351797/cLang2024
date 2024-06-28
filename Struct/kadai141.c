#include<stdio.h>
struct kobedenshi
{
	char course[100];
	char subject[20];
	int	credit_units;
};

main()
{
	struct kobedenshi enrollment = { "ゲームソフトⅠコース","C言語",8 };
	printf("コース名 ;%s\n", enrollment.course);
	printf("教科名	 ;%s\n", enrollment.subject);
	printf("単位数	 ;%d\n", enrollment.credit_units);


}