#include<stdio.h>

main()
{
	//�ϐ��E�z��̐錾
	int score=0;
	char name[256];
	char c;
	FILE* fp;

	fp = fopen("score.txt", "w");

	printf("���O����͂��Ă�������");
	scanf("%s", name);

	while (1)
	{
		printf("���݂̃X�R�A:%d (e�ŏI��)" , score);
		c = getch();
		if (c == 'e')break;
		score++;
		printf("\n");
	}

	fprintf(fp, "%s\n%d",name, score);
	fclose(fp);
}