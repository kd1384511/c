#include<stdio.h>

/*==�v���g�^�C�v�錾============================================*/
int strcnt(char* p);

/*==�G���g���|�C���g============================================*/
main()
{
	char buf[256];
	int mojisuu;
	printf("������H�F");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�����ł�\n", mojisuu);
}

/*==������̕�����=============================================*/
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++,p++);
	return cnt;
}