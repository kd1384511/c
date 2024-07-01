#include<stdio.h>

main()
{
	FILE* fp;
	char str[256];

	int lv, hp;
	char equip[256];

	char c;

	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s\n", str);
	printf("‘•”õ:%s\n", str);
	fscanf(fp, "%s\n", str);
	printf("‘•”õ:%s\n", str);
	fscanf(fp, "%s\n", str);
	printf("‘•”õ:%s\n", str);

	fscanf(fp,"%d%d%s", &lv, &hp, equip);
	printf("lv:%d hp:%d ‘•”õ:%s\n", lv, hp, equip);

	c = fgetc(fp);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);
}