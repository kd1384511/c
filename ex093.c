#include<stdio.h>

struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = {
		{"�G���s�c",30,5},
		{"�P�V�S��",50,2},
		{"�t�f�o�R",500,3}
	};
	struct syohin_data* p = syohin;

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���i���F\\%s\t", (p+i)->name);
		printf("�P�@���F\\%d\t", (p+i)->tanka);
		printf("�@���F\\%d\t", (p+i)->kosuu);
		printf("\n");
	}
}