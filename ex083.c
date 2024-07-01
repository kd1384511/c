#include<stdio.h>

/*==プロトタイプ宣言============================================*/
int strcnt(char* p);

/*==エントリポイント============================================*/
main()
{
	char buf[256];
	int mojisuu;
	printf("文字列？：");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("入力された文字列の文字数は%d文字です\n", mojisuu);
}

/*==文字列の文字数=============================================*/
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++,p++);
	return cnt;
}