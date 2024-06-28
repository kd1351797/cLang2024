#include<stdio.h>
#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[] = {	{ 1,"北海道",NULL},
								{ 2,"青森県",NULL},
								{ 3,"岩手県",NULL},
								{ 4,"宮城県",NULL},
								{ 5,"秋田県",NULL},
								{ 6,"山形県",NULL},
								{ 7,"福島県",NULL},
								{ DATA_END,"",NULL }, };
	struct ken* p, * wp;

	//リンクの設定
	p = wp = ken_data;
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	
	// p = ken_data;　	//ポインタpを配列の先頭アドレス（北海道）へ

	// p->next = p+6;　	//北海道のnextメンバを6つ先の福島のアドレスへ

	//リンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		
		//printf("%p ", p);　			//pのアドレス確認

		printf("code = %d name = %s\n", p->code, p->name);

		//printf(" %p\n", p->next);　	//nextのアドレス確認
	}
}