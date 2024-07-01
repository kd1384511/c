#include<stdio.h>
#include<stdlib.h>

#define MapNum 3
#define W 10
#define H 5

typedef struct {
	int map[H][W];
}Map;

typedef struct {
	int x, y;
}Pos;

void SetMap(char* filename, Map* m);
void DrawMap(Map p);
void CharaMove(Map* m,Pos* p);

main()
{
	int i = 0;
	Map MapData;
	Pos CharaPos = { 1,1 };

	char* MapFileName[MapNum] = {
		"map0.txt",
		"map1.txt",
		"map2.txt"
	};

	int select = 0;

	SetMap(MapFileName[select], &MapData);
	MapData.map[CharaPos.y][CharaPos.x] = 2;
	while (i!=50) {
		DrawMap(MapData);
		CharaMove(&MapData, &CharaPos);
		i++;
		system("cls");
	}
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	if (fp = fopen(filename, "r"))
	{
		char ch;
		for (int i = 0; i < H;i++)
		{
			for (int j = 0; j < W; j++)
			{

				ch = fgetc(fp);
				m->map[i][j] = atoi(&ch);
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}

void DrawMap(Map p)
{
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			switch (p.map[i][j])
			{
			case 0: printf(" ");
				break;
			case 1: printf("¡");
				break;
			case 2: printf("@");
				break;
			}
		}
		printf("\n");
	}

}

void CharaMove(Map* m, Pos* p)
{
	char ch;
	ch = getch();

	switch (ch)
	{
	case 'd': 
		if (m->map[p->y][p->x + 1])break;
		m->map[p->y][p->x] = 0;
		p->x += 1;
		m->map[p->y][p->x]=2;
		break;
	case 'x': 
		if (m->map[p->y + 1][p->x])break;
		m->map[p->y][p->x] = 0;
		p->y += 1;
		m->map[p->y][p->x]=2;
		break;
	case 's': 
		if (m->map[p->y][p->x -1])break;
		m->map[p->y][p->x] = 0;
		p->x -= 1;
		m->map[p->y][p->x]=2;
		break;
	case 'e': 
		if (m->map[p->y - 1][p->x])break;
		m->map[p->y][p->x] = 0;
		p->y -= 1;
		m->map[p->y][p->x]=2;
		break;
	}
}
