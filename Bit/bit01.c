#include<stdio.h>
enum BitState {
	Base = 0,			//0000 0000通常
	Poison = 1 << 0,	//0000 0001毒
	Sleep = 1 << 1,		//0000 0010ねむり
	Paralysis = 1 << 2,	//0000 0100まひ
	Burn = 1 << 3,		//0000 1000やけど
	AtkUp = 1 << 4,		//0001 0000攻撃力アップ
	AtkDown = 1 << 5,	//0010 0000攻撃力ダウン
};

typedef unsigned int UINT;

void DisplayStatus(UINT s);	//現在のデータを表示する関数
void ChangeFlag(UINT* s);	//状態付与
void ClearFlag(UINT* s);	//状態解除

main() 
{
	UINT  MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

//現在のデータを表示する関数
void DisplayStatus(UINT s)
{
	printf("\n****現在の状態****\n\n");
	if (s & Poison)
	{
		printf(" 毒\n");
	}
	if (s & Sleep)
	{
		printf(" 睡眠\n");
	}
	if (s & Paralysis)
	{
		printf(" 麻痺\n");
	}
	if (s & Burn)
	{
		printf(" 火傷\n");
	}
	if (s & AtkUp)
	{
		printf(" 攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf(" 攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf(" 通常状態\n");
	}
	printf("\n******************\n");
}

//状態付与
void ChangeFlag(UINT* s)
{
	int num;
	while (1)
	{
		printf("\nどの状態にしますか？\n\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃力アップ 6:攻撃力ダウン 0:終了 > ");
		scanf("%d", &num);

		if (num == 0)break;
		switch (num)
		{
			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
			default :
				printf("\n1 ～ 6または0を入力してください\n");
				break;
		}
	}
}

//状態解除
void ClearFlag(UINT* s)
{
	int num;
	while (1)
	{
		printf("\nどの状態を解除しますか？\n\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃力アップ 6:攻撃力ダウン 7:全解除 0:終了 > ");
		scanf("%d", &num);

		if (num == 0)break;
		switch (num)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			printf("\n1 ～ 7または0を入力してください\n");
			break;
		}
		if (num == 7)break;
	}
}
