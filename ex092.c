#include<stdio.h>

struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = {
		{"エンピツ",30,5},
		{"ケシゴム",50,2},
		{"フデバコ",500,3}
	};

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("商品名：%s\t", syohin[i].name);
		printf("単　価：%d\t", syohin[i].tanka);
		printf("個　数：%d\t", syohin[i].kosuu);
		printf("\n");
	}
}