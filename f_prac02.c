#include<stdio.h>

main()
{
	//�ϐ��E�z��̐錾
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
	printf("�ō����_�@���O:%s\t�X�R�A:%d\n", max_name, max_score);

	printf("�v���C���[�̖��O");
	scanf("%s", name);

	while (1)
	{
		printf("���݂̃X�R�A:%d (e�ŏI��)" , score);
		c = getch();
		if (c == 'e')break;
		score++;
		printf("\n");
	}

	if(max_score<score)
	{
		printf("\n�n�C�X�R�A�X�V�I\n");
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d", name, score);
		fclose(fp);
	}
}