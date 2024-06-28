#include<stdio.h>

#define MapNum 3
#define W 10
#define H 5

typedef struct
{
	int m_map[H][W];
}Map;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);


main()
{
	Map MapData;

	char* MapFileName[MapNum] = { "f_map0.txt","f_map1.txt","f_map2.txt" };

	int select, cnt = 0;

	printf("マップデータ(0～%d) >>", MapNum - 1);
	scanf("%d", &select);

	if (select >= 0 && select <= MapNum - 1)
	{
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
	else
	{
		while (select < 0 || select > MapNum - 1)
		{
			printf("0～%dの数字を入れてください\n\n", MapNum - 1);
			printf("マップデータ(0～%d) >>", MapNum - 1);
			scanf("%d", &select);
		}
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}

}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;

	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
	}
}

void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}