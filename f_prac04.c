#include<stdio.h>

#define Sol_num 3

typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char anme[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Didplay(Soldier* s);

main()
{
	Soldier sols[Sol_num];
	SetInfo(sols, "file04.txt");
	Didplay(sols);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	if(fp = fopen(filename, "r"))
	{
		for (int i = 0; i < 3; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s + i)->anme, &(s + i)->hp, (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
}

void Didplay(Soldier* s)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%s  ‘Ì—Í:%d\n•Ší:%s  Žc’e”:%d  UŒ‚—Í:%.2f\n", (s + i)->anme, (s + i)->hp, (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
		printf("\n");
	}
}
