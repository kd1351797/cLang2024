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
	struct ken ken_data[] = { { 1,"北海道",NULL},
								{ 2,"青森県",NULL},
								{ 3,"岩手県",NULL},
								{ 4,"宮城県",NULL},
								{ 5,"秋田県",NULL},
								{ 6,"山形県",NULL},
								{ 7,"福島県",NULL},
								{ DATA_END,"",NULL },
								{28,"兵庫県",NULL} };
	struct ken* p, * wp;

	//リンクの設定
	p = wp = ken_data;
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//青森県のnextメンバ値を宮城県のアドレスに変更
	p = ken_data;			//ポインタpにken_dataの先頭アドレスを代入
	p++;					//ポインタpを使って青森県のアドレスを求める
	p->next = p + 2;		//青森県のp->nextに宮城県のアドレスを代入

	//北海道のnextメンバの値を兵庫県のアドレスに変更して
	// 兵庫県のnextメンバの値を青森県のアドレスにする
	p = ken_data;
	p->next = p + 8;
	(p + 8)->next = p + 1;


	//リンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %2d name = %s\n", p->code, p->name);
	}
}