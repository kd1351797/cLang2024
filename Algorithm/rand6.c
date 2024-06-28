#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int player, cpu, i, num;
	

	srand(time(0));

	printf("何回勝負？");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		cpu = rand() % 3;

		printf("何を出しますか？");
		printf("(1:グー　2:チョキ 3:パー)");
		scanf("%d", &player);

		//プレイヤーの手の表示
		if (player == 1)
		{
			printf("プレイヤーは、グーを出しました。\n");
		}
		else if (player == 2)
		{
			printf("プレイヤーは、チョキを出しました。\n");
		}
		else
		{
			printf("プレイヤーは、パーを出しました。\n");
		}
		
		//CPUの手の表示
		if (cpu == 0)
		{
			printf("コンピュータは、グーを出しました。\n");
		}
		else if (cpu == 1)
		{
			printf("コンピュータは、チョキを出しました。\n");
		}
		else 
		{
			printf("コンピュータは、パーを出しました。\n");
		}

		//勝敗判定
		if (player == 1 && cpu == 0)
		{
			printf("引き分けです\n\n");
		}
		if (player == 1 && cpu == 1)
		{
			printf("あなたの勝ちです\n\n");
		}
		if (player == 1 && cpu == 2)
		{
			printf("あなたの負けです\n\n");
		}
		if (player == 2 && cpu == 0)
		{
			printf("あなたの負けです\n\n");
		}
		if (player == 2 && cpu == 1)
		{
			printf("引き分けです\n\n");
		}
		if (player == 2 && cpu == 2)
		{
			printf("あなたの勝ちです\n\n");
		}
		if (player == 3 && cpu == 0)
		{
			printf("あなたの勝ちです\n\n");
		}
		if (player == 3 && cpu == 1)
		{
			printf("あなたの負けです\n\n");
		}
		if (player == 3 && cpu == 2)
		{
			printf("引き分けです\n\n");
		}
	}

}