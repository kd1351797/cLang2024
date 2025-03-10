#include<stdio.h>

typedef struct
{
	char Wname[20];
	int bullet;
	float atk;

}Weapon;

typedef struct
{
	char name[20];
	int hp;
	Weapon wpn;

}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier s);

main()
{
	Soldier sol1;
	SetInfo(&sol1, "file03.txt");
	Display(sol1);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen(filename, "r"))
	{
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
	}
	else
	{
		printf("ファイルが読み込めません\n");
	}
	return;
}

void Display(Soldier s)
{
	printf("%s\t体力 : %d\n", s.name, s.hp);
	printf("武器 : %s\t弾数 : %d\t攻撃力 : %.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}