#include<stdio.h>

typedef struct  {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct  {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void display(Soldier s);

main()
{
	Soldier sol;
	SetInfo(&sol, "file.txt");
	display(sol);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("file open error\n");
	}

	fscanf(fp, "%s %d %s %d %f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
	fclose(fp);
}
void display(Soldier s)
{
	printf("–¼‘O:%s ‘Ì—Í:%d\n•Ší:%s ’e”:%d UŒ‚—Í:%.3f\n", s.name, s.hp, s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}
