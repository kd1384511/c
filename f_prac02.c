#include<stdio.h>

main()
{
	//変数・配列の宣言
	int score=0;
	int max_score;
	char name[256];
	char max_name[20];
	char c;
	FILE* fp;

	fp = fopen("score.txt", "r");
	fscanf(fp,"%s", max_name);
	fscanf(fp,"%d", &max_score);
	fclose(fp);
	printf("最高得点　名前:%s\tスコア:%d\n", max_name, max_score);

	printf("プレイヤーの名前");
	scanf("%s", name);

	while (1)
	{
		printf("現在のスコア:%d (eで終了)" , score);
		c = getch();
		if (c == 'e')break;
		score++;
		printf("\n");
	}

	if(max_score<score)
	{
		printf("\nハイスコア更新！\n");
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d", name, score);
		fclose(fp);
	}
}