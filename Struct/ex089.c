#include<stdio.h>
#include<string.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile student;

	printf("名前を入力 :");
	scanf("%s", student.name);
	printf("生年月日を区切って入力 :");
	scanf("%d%d%d", &student.birth[0], &student.birth[1], &student.birth[2]);
	printf("血液型を入力 :");
	scanf("%s", student.blood);

	printf("%s ーー%d年%d月%d日生まれ 血液型ーー%s型", 
		student.name,
		student.birth[0], student.birth[1], student.birth[2],
		student.blood);
}