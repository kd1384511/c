#include<stdio.h>

/*==�v���g�^�C�v�錾=====================================*/
void str_Connect(char* p1, char* p2);

/*==�G���g���|�C���g=====================================*/
main()
{
	char a[256], b[256];

	printf("�z��a:");
	gets(a);

	printf("�z��b:");
	gets(b);

	str_Connect(a, b);

	printf("�z��a:%s", a);
}

void str_Connect(char* p1, char* p2)
{
	int cnt;
	for (cnt = 0; *(p1+cnt) != '\0'; cnt++);

	while (*p2 != '\0')
	{
		*(p1 + cnt) = *p2++;
		cnt++;
	}
	*(p1 + cnt) = '\0';
}
