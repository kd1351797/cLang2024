#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile student;
	struct profile* p;

	p = &student;

	printf("���O����� :");
	scanf("%s", p->name);
	printf("���N�������󔒂ŋ�؂��ē��� :");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^����� :");
	scanf("%s", p->blood);

	printf("%s - %4d�N%2d��%2d���� ���t�^ - %s�^\n", 
		p->name,
		p->birth[0], p->birth[1], p->birth[2],
		p->blood);
}