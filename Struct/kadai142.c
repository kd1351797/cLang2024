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

	printf("コース名 ;");
	scanf("%s", p->course);
	printf("教科名　 ;");
	scanf("%s", p->subject);
	printf("単位数　 ;");
	scanf("%d", &p->credit_units);


	printf("コース名 ;%s\n", p->course);
	printf("教科名	 ;%s\n", p->subject);
	printf("単位数	 ;%d\n", p->credit_units);


}