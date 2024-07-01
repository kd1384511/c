#include<stdio.h>
#include<stdlib.h>

#define MapNum 3
#define W 10
#define H 5

typedef struct {
	int map[H][W];
}Map;

void SetMap(char* filename, Map* m);
void display(Map p);

main()
{
	Map MapData;

	char* MapFileName[MapNum] = {
		"map0.txt",
		"map1.txt",
		"map2.txt"
	};

	int select;

	printf("表示するマップはどれですか？\n");
	printf("(0,1,2)");
	scanf("%d", &select);

	SetMap(MapFileName[select], &MapData);
	display(MapData);
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
			fgetc(fp);;
		}
		fclose(fp);
	}
}

void display(Map p)
{
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			if (p.map[i][j]==1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
			if (j == W - 1)
			{
				printf("\n");
			}
		}
	}

}
