#include<stdio.h>

main()
{
	//変数・配列の宣言
	int score=0;
	char name[256];
	char c;
	FILE* fp;

	fp = fopen("score.txt", "w");

	printf("名前を入力してください");
	scanf("%s", name);

	while (1)
	{
		printf("現在のスコア:%d (eで終了)" , score);
		c = getch();
		if (c == 'e')break;
		score++;
		printf("\n");
	}

	fprintf(fp, "%s\n%d",name, score);
	fclose(fp);
}