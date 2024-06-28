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

	printf("–¼‘O‚ğ“ü—Í :");
	scanf("%s", student.name);
	printf("¶”NŒ“ú‚ğ‹æØ‚Á‚Ä“ü—Í :");
	scanf("%d%d%d", &student.birth[0], &student.birth[1], &student.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í :");
	scanf("%s", student.blood);

	printf("%s [[%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^[[%sŒ^", 
		student.name,
		student.birth[0], student.birth[1], student.birth[2],
		student.blood);
}