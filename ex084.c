#include<stdio.h>

/*==�v���g�^�C�v�錾=======================================*/
void reverse(char* p1, char* p2);

/*==�G���g���|�C���g=======================================*/
main()
{
	char str1[256], str2[256];
	printf("������H");
	scanf("%s", str1);

	reverse(str1, str2);
	printf("str1:%s\n", str1);
	printf("str2:%s", str2);
}

/*==�t���ɂ���===========================================*/
/*�������F�R�s�[���z��@�R�s�[��z��                                                                              */
/*===================================================*/
void reverse(char* p1, char* p2)
{
	int cnt;
	for (cnt = 0; *p1 != '\0'; p1++, cnt++);
	p1--;
	for (int i = 0; i < cnt; i++)
	{
		*(p2 + i) = *p1--;
	}
	*(p2 + cnt) = '\0';
}